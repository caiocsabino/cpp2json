#include "cpp2json.h"
#include <iostream>

// Creates different classes to showcase serialisation for all supported types.

class Position : public Cpp2JsonSerialisable
{
public:
	Position()
		: x(0.0f)
		, y(0.0f)
	{

	}

	Position(float ax, float ay)
		: x(ax)
		, y(ay)
	{

	}

	inline void SetX(float ax) { x = ax;}
	inline void SetY(float ay) { y = ay;}

	inline float GetX() const { return x;}
	inline float GetY() const { return y;}

	CPP2JSON_SERIALISATION
	(
		x,
		y
	)

private:

	float x;
	float y;

};

class Character : public Cpp2JsonSerialisable
{
public:
	Character() 
	{
		position = Position();
		sprite = "";
	}

	Character(const Position& aposition, const std::string& asprite)
		: position(aposition)
		, sprite(asprite)
	{

	}

	inline const Position& GetPosition() const { return position; }
	inline void SetPosition(const Position& aposition) { position = aposition; }

	inline const std::string& GetSprite() const { return sprite; }
	inline void SetSprite(const std::string& asprite) { sprite = asprite; }

	CPP2JSON_SERIALISATION
	(
		position,
		sprite
	)

private:

	Position position;
	std::string sprite;

};

// Example of inheritance
class Player : public Character
{
public:
	Player() 
		: Character()
		, health(1.0f)
	{
	
	}

	Player(const Position& aposition, const std::string& asprite)
		: Character(aposition, asprite)
		, health(1.0f)
	{

	}

	// Ensures the serialisable properties in Character are included.
	CPP2JSON_DECLARE_BASE_CLASS(Character)

	CPP2JSON_SERIALISATION
	(
		health
	)

private:
	float health;
};

class GameMap : Cpp2JsonSerialisable
{
public:
	GameMap()
		: id(0)
	{
		enemies = std::vector<std::shared_ptr<Character>>();
		team = std::map<std::string, std::shared_ptr<Character>>();

		player = std::make_shared<Player>(Position(0, 0), "player.png");
	}

	GameMap(int aid)
		: id(aid)
	{
		enemies = std::vector<std::shared_ptr<Character>>();
		team = std::map<std::string, std::shared_ptr<Character>>();

		player = std::make_shared<Player>(Position(0, 0), "player.png");
	}

	inline void AddEnemy(std::shared_ptr<Character> enemy)
	{
		enemies.push_back(enemy);
	}

	inline void AddTeamMember(const std::string& memberId, std::shared_ptr<Character> member)
	{
		team[memberId] = member;
	}

	inline const Position& GetTeamMemberPosition(const std::string& memberId) const 
	{
		return team.at(memberId)->GetPosition();
	}

	CPP2JSON_SERIALISATION
	(
		id,
		enemies,
		team,
		player
	)

private:

	int id;

	std::vector<std::shared_ptr<Character>> enemies;
	std::map<std::string, std::shared_ptr<Character>> team;

	std::shared_ptr<Player> player;
};

int main() 
{
	GameMap gameMap = GameMap(0);

	std::shared_ptr<Character> wizard = std::make_shared<Character>(Position(0,0), "wizard.png");
	std::shared_ptr<Character> barbarian = std::make_shared<Character>(Position(1,0), "barbarian.png");
	std::shared_ptr<Character> knight = std::make_shared<Character>(Position(2,0), "knight.png");

	gameMap.AddTeamMember("wizard", wizard);
	gameMap.AddTeamMember("barbarian", barbarian);
	gameMap.AddTeamMember("knight", knight);

	for (uint32_t i = 0; i < 500; ++i)
	{
		std::shared_ptr<Character> enemy = std::make_shared<Character>(Position(0.0f,static_cast<float>(3+i)), "enemy.png");
		gameMap.AddEnemy(enemy);
	}

	const std::string& serialisationStr = gameMap.Cpp2JsonGetSerialisationString();

	GameMap clone = GameMap();

	clone.Cpp2JsonDeserialise(serialisationStr);

	// Verification: Do we have a wizard at 0,0?
	bool foundWizard = clone.GetTeamMemberPosition("wizard").GetX() == 0;
	std::cout << "\nFound wizard: " << foundWizard;

	const std::string& cloneSerialisationStr = clone.Cpp2JsonGetSerialisationString();

	// Verify if serialisation strings are identical for both objects.
	
	if (serialisationStr == cloneSerialisationStr)
	{
		std::cout << "\nSuccess! Identical serialisation.\n" << serialisationStr;
	}
	else
	{
		std::cout << "\nFailure! Serialisation strings do not match.\n" << serialisationStr << "\n\n" << cloneSerialisationStr;
	}

	std::cout << "\n";

}