#include <stdio.h>
#include <stdbool.h>

// Size of the Sudoku grid
#define N 9

// Function to print the Sudoku grid
void printSudoku(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%2d ", grid[row][col]);
        }
        printf("\n");
    }
}

// Function to check if a number can be placed in a given position
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Check in the row and column
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
    }

    // Check in the 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to solve the Sudoku puzzle using backtracking
bool solveSudoku(int grid[N][N]) {
    int row, col;

    // Find an empty position in the grid
    bool isEmpty = false;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) {
            break;
        }
    }

    // If there are no empty positions, the puzzle is solved
    if (!isEmpty) {
        return true;
    }

    // Try placing numbers 1 to 9 in the empty position
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            // Place the number if it's safe
            grid[row][col] = num;

            // Recur to solve the rest of the puzzle
            if (solveSudoku(grid)) {
                return true;
            }

            // If placing the number doesn't lead to a solution, backtrack
            grid[row][col] = 0;
        }
    }

    // No number can be placed, backtrack
    return false;
}

int main() {
    // Example Sudoku puzzle (0 represents empty cells)
    int sudokuGrid[N][N] = {
        {2, 8, 0, 0, 0, 3, 0, 7, 0},
        {0, 0, 0, 6, 0, 0, 0, 0, 9},
        {0, 5, 6, 4, 0, 7, 0, 0, 0},
        {0, 6, 3, 1, 2, 0, 7, 9, 8},
        {0, 0, 0, 8, 5, 0, 0, 0, 4},
        {8, 1, 4, 7, 3, 0, 6, 5, 0},
        {0, 0, 2, 0, 0, 8, 0, 0, 0},
        {6, 4, 0, 0, 0, 0, 9, 0, 3},
        {0, 0, 0, 3, 0, 0, 2, 6, 0}
    };

    printf("Sudoku Puzzle:\n");
    printSudoku(sudokuGrid);

    if (solveSudoku(sudokuGrid)) {
        printf("\nSolution:\n");
        printSudoku(sudokuGrid);
    } else {
        printf("\nNo solution exists.\n");
    }

    return 0;
}
