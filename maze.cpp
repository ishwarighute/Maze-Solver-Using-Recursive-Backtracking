#include <iostream>
#include "maze.h"

using namespace std;

// Constructor
Maze::Maze()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            solution[i][j] = maze[i][j];
        }
    }
}

// Recursive Backtracking Function
bool Maze::solveMaze(int row, int col)
{
    // Check boundaries
    if (row < 0 || col < 0 || row >= SIZE || col >= SIZE)
        return false;

    // Check wall or visited cell
    if (solution[row][col] == '#' ||
        solution[row][col] == 'x')
        return false;

    // Check destination
    if (solution[row][col] == 'F')
        return true;

    char original = solution[row][col];

    // Mark current cell as visited
    if (solution[row][col] != 'S')
        solution[row][col] = '*';

    // Move Down
    if (solveMaze(row + 1, col))
        return true;

    // Move Right
    if (solveMaze(row, col + 1))
        return true;

    // Move Up
    if (solveMaze(row - 1, col))
        return true;

    // Move Left
    if (solveMaze(row, col - 1))
        return true;

    // Backtrack
    solution[row][col] = original;

    return false;
}

// Start solving
bool Maze::solve(int row, int col)
{
    return solveMaze(row, col);
}

// Display Original Maze
void Maze::displayMaze()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}

// Display Solved Maze
void Maze::displaySolution()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << solution[i][j] << " ";
        }
        cout << endl;
    }
}