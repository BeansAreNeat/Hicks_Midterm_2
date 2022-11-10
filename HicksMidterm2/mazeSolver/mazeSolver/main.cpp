#include <iostream>
#include "maze.h"
using namespace std;

/*
	Citations
	1) https://stackoverflow.com/questions/19819214/maze-solver-in-c
	2) https://www.youtube.com/watch?v=uB5vUrFuO2o
	3) https://www.youtube.com/watch?v=lRuhf6sDHEk
	4) https://www.youtube.com/watch?v=tAVqdoWtJ9o&t=231s
*/
int main()
{
	// Starting row unique to the maze being used
	int startRow = 1, startCol = 0;
	Maze m;
	m.solve(startRow, startCol);
	m.printMaze();
	return 0;

}