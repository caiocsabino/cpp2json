#include "cpp2json.h"
#include <iostream>

// Creates different classes to showcase serialisation for all supported types.

class Position
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

private:

	SERIALISATION
	(
		x,
		y
	)

	float x;
	float y;

};

class Character
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

private:

	SERIALISATION
	(
		position,
		sprite
	)

	Position position;
	std::string sprite;

};

class GameMap
{
public:
	GameMap()
		: id(0)
	{
		enemies = std::vector<std::shared_ptr<Character>>();
		team = std::map<std::string, std::shared_ptr<Character>>();
	}

	GameMap(int aid)
		: id(aid)
	{
		enemies = std::vector<std::shared_ptr<Character>>();
		team = std::map<std::string, std::shared_ptr<Character>>();
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

private:

	SERIALISATION
	(
		id,
		enemies,
		team
	)

	int id;

	std::vector<std::shared_ptr<Character>> enemies;
	std::map<std::string, std::shared_ptr<Character>> team;
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

	std::stringstream serialisationStream;
	Cpp2JsonWriter jsonWriter = Cpp2JsonWriter(serialisationStream);
	jsonWriter.write(gameMap);

	GameMap clone = GameMap();

	rapidjson::Document jsonDocument = rapidjson::Document();

	Cpp2JsonReader jsonReader = Cpp2JsonReader(serialisationStream.str(), &jsonDocument);
	jsonReader.read(clone);

	// Verification: Do we have a wizard at 0,0?
	bool foundWizard = clone.GetTeamMemberPosition("wizard").GetX() == 0;
	std::cout << "\nFound wizard: " << foundWizard;

	// Verify if serialisation strings are identical for both objects.
	std::stringstream verificationStream;
	Cpp2JsonWriter jsonWriterVerification = Cpp2JsonWriter(verificationStream);
	jsonWriterVerification.write(clone);

	if (serialisationStream.str() == verificationStream.str())
	{
		std::cout << "\nSuccess! Identical serialisation.\n" << serialisationStream.str();
	}
	else
	{
		std::cout << "\nFailure! Serialisation strings do not match.\n" << serialisationStream.str() << "\n\n" << verificationStream.str();
	}

	std::cout << "\n";

}