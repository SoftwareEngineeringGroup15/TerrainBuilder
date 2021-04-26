# TerrainBuilder
An extension of Craft to procedurally generate terrain
This is for my Terrain Builder Project 

To test requirements 10, 11, 12, and 19 implementations:
Requires GCC
cd into the src directory
cd into Jonathan_Test_Requirements
execute commands:
g++ -g Jonathan_Requirements10_11_12_19.h Jonathan_Requirements10_11_12_19.c Jonathan_Testbench.c
./a.out

The print statements track program execution through the random number generation of a movement speed value, precipitation type (enum value 0-2 currently with support for more to be added), and state what the randomly generated values are and what is recieved by the structs after the set functions. Running the game following the README.md provided by the original author allows the changes to be seen in game currently no precipitation is visual, but the reduced render radius updates based on movement speed and the generated weather condition are visible.
