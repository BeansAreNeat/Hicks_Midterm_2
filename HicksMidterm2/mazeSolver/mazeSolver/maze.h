#pragma once

#include <iostream>
using namespace std;

class Maze
{
public:
	// Recursivly solves maze
	bool solve(int curr, int currC);
	// Prints maze after it is solved
	void printMaze();

	bool isEmpty(int row, int col);

private:
	// Start of maze
	int startRow = 1;
	int startCol = 0;
	// End of maze
	int endRow = 3;
	int endCol = 8;

	const char W = '#'; // Wall
	const char S = '.'; // Space

	static const int WIDTH = 9;
	static const int HEIGHT = 9;

	// Using char variables was needed for converting '.' into '+'
	char maze[HEIGHT][WIDTH] =
	{ 
		{W, W, W, W, W, W, W, W, W},
		{S, S, S, S, W, S, S, S, W},
		{W, S, W, W, W, S, W, S, W},
		{W, S, W, S, S, S, W, S, S},
		{W, S, W, S, W, S, W, S, W},
		{W, S, S, S, W, S, W, S, W},
		{W, W, W, W, W, S, W, S, W},
		{W, S, S, S, S, S, S, S, W},
		{W, W, W, W, W, W, W, W, W} 
	};
		/*
		{"# # # # # # # # #"},
		{". . . . # . . . #"},
		{"# . # # # . # . #"},
		{"# . # . . . # . ."},
		{"# . # . # . # . #"},
		{"# . . . # . # . #"},
		{"# # # # # . # . #"},
		{"# . . . . . . . #"},
		{"# # # # # # # # #"}
		*/
};