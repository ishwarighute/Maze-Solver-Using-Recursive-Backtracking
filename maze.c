#ifndef MAZE_H
#define MAZE_H

class Maze
{
private:
    static const int SIZE = 5;

    char maze[SIZE][SIZE] =
    {
        {'S', ' ', '#', '#', '#'},
        {'#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', 'F', '#'}
    };

    char solution[SIZE][SIZE];

    bool solveMaze(int row, int col);

public:
    Maze();

    bool solve(int row, int col);

    void displayMaze();

    void displaySolution();
};

#endif