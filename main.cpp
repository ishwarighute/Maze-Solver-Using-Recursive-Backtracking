#include <iostream>
#include "maze.h"

using namespace std;

int main()
{
    cout << "==============================" << endl;
    cout << "       MAZE SOLVER" << endl;
    cout << "  Recursive Backtracking" << endl;
    cout << "==============================" << endl;

    Maze maze;

    cout << "\nOriginal Maze:\n";
    maze.displayMaze();

    if (maze.solve(0, 0))
    {
        cout << "\nPath Found Successfully!\n";
        cout << "\nSolved Maze:\n";
        maze.displaySolution();
    }
    else
    {
        cout << "\nNo Path Found!\n";
    }

    return 0;
}