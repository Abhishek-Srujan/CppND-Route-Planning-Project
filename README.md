# Route Planning Project 

In this project shortest path between two locations is calculated through A*search in OpenStreetMap. 

## Cloning

When cloning this project, be sure to use the `--recurse-submodules` flag.

## Compiling and Running

### Compiling
To compile the project, first, create a `build` directory and change to that directory:
```
mkdir build && cd build
```
From within the `build` directory, then run `cmake` and `make` as follows:
```
cmake ..
make
```
### Running
The executables will be placed in the `bin` directory. From within `build`, you can run the project as follows:
```
../bin/<name-of-parent-directory> -f ../map.osm
```

## Testing

For exercises that have unit tests, the project must be built with the approprate test cpp file. This can be done by passing a string with the `-DTESTING` flag in `cmake`. For example, from the build directory:
```
cmake -DTESTING="RouteModel" ..
make
```
Those commands will build the code with the tests for the "Fill Out Route Model". The tests can then be run from the `build` directory as follows:
```
../bin/test
```
Exercises with tests will specify which string to pass with `-DTESTING`, but a table is given below with the complete list for reference:

| Tasks                       | `-DTESTING` String Value |
|-----------------------------|:------------------------:|
| Route Model                 |       "RouteModel"       |
| Node Class                  |       "RMNodeClass"      |
| RouteModel Nodes            |        "RMSNodes"        |
| Distance Function           |        "NodeDist"        |
| Road to Node Hashmap        |       "NodeToRoad"       |
| FindNeighbors               |      "FindNeighbors"     |
| Find the Closest Node       |       "FindClosest"      |
| A\* Search Stub             |        "AStarStub"       |
| Finish A\* Search           |       "AStarSearch"      |

