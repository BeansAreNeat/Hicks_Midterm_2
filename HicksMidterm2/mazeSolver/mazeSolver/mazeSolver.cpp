#include <iostream>
#include "maze.h"
using namespace std;

bool Maze::solve(int currR, int currC)
{
	// Base
	if (currR == endRow && currC == endCol)
	{
		// Changes the last point (It normally gets ignored)
		maze[currR][currC] = '+';
		// If at target location, the maze is solved
		return true;
	}

	// Base
	if (!isEmpty(currR, currC))
		return false;  

	// Current location in x & y location
	maze[currR][currC] = '+';

	// Recursive Case
	// Checks in front of, or to the right of the current point
	if (solve(currR + 1, currC) || solve(currR - 1, currC) 
	 || solve(currR, currC + 1) || solve(currR, currC - 1))
	{
		return true;
	}
	else
	{
		maze[currR][currC] = S;
		return false;
	}

	// If no solution in maze
	return false;
}

void Maze::printMaze()
{
	// Standard nested for loop prints the maze
	for (int row = 0; row < HEIGHT; row++)
	{
		for (int col = 0; col < WIDTH; col++)
		{
			cout << maze[row][col];
		}
		cout << endl;
	}
}

bool Maze::isEmpty(int row, int col)
{
	if (row >= 0 && col >= 0 && row < HEIGHT && col < WIDTH)
	{
		if (maze[row][col] == S)
		{
			return true;
		}
	}
	// Implied if (maze[row][col] == '#')
	return false;
}