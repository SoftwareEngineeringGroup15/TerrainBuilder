# TerrainBuilder
An extension of Craft to procedurally generate terrain
This is for my Terrain Builder Project 

For generating Doxygen documentation:
**TODO**

To test requirements 10, 11, 12, and 19 implementations:
Requires GCC
cd into the src directory
cd into Jonathan_Test_Requirements
execute commands:
g++ -g Jonathan_Requirements10_11_12_19.h Jonathan_Requirements10_11_12_19.c Jonathan_Testbench.c
./a.out

The print statements track program execution through the random number generation of a movement speed value, precipitation type (enum value 0-2 currently with support for more to be added), and state what the randomly generated values are and what is recieved by the structs after the set functions. Running the game following the README.md provided by the original author allows the changes to be seen in game currently no precipitation is visual, but the reduced render radius updates based on movement speed and the generated weather condition are visible.

Doxygen documentation is availible for the entire Jonathan_Test_Requirements directory.
Terminal executions:
doxygen -g
doxygen

Inspecting the index.html in the "Modules" tab there will be a Jonathan_Terrain_Mods module item containing some redundant documentation of the Jonathan_Requirements10_11_12_19.h and .c files as well as new documentation of the test bench highlighting which methods test which requirements.
