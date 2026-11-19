# Maze Solver Using Recursive Backtracking

## Project Description
Maze Solver is a console-based C++ application that finds a path from the starting point to the finishing point of a maze using the Recursive Backtracking algorithm.

## Technologies Used
- C++
- Visual Studio Code
- Recursion
- 2D Arrays
- Backtracking Algorithm

## Features
- Displays the original maze.
- Finds a path from Start to Finish.
- Uses recursive backtracking.
- Displays the solved maze.
- Detects when no path is available.

## Symbols Used

| Symbol | Meaning |
|---|---|
| S | Starting Point |
| F | Finishing Point |
| # | Wall |
| * | Solution Path |
| Space | Empty Path |

## Algorithm
1. Start from the starting position.
2. Check whether the current position is valid.
3. Mark the current position as visited.
4. Try moving Down, Right, Up, and Left.
5. If a direction does not work, backtrack.
6. Continue until the finishing point is reached.

## How to Run

Compile the program:

```bash
g++ main.cpp maze.cpp -o MazeSolver
```

Run on Windows:

```bash
.\MazeSolver.exe
```

## Author
Diploma Engineering Student