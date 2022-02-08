# Cpp2Json
Header-only automated C++ classes serialisation and deserialisation.

Derived from Maguns Holm's implementation:
[Example of reflection in C++](https://gist.github.com/judofyr/18cc1e9e4f48a13483c00d1c86e34cf5)

JSON parsing implemented with RapidJSON: 
[RapidJSON](https://github.com/Tencent/rapidjson)

Serializable fields can be pointers, objects, built-in types, vectors and maps.
Pointer types must be allocated before serialisation and deserialisation, preferrably in the constructor.

## Running the example
- Clone the repository and initialize RapidJson submodule:

```bash
git clone https://github.com/caiocsabino/cpp2json.git
cd cpp2json
git submodule init
git submodule update
```

- Compile the example:
```bash
g++ main.cpp -std=c++11 -Irapidjson/include -o output
```

- Run the example:
```bash
./output
```
