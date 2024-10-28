#include "Std2DArrays.h"
#include <iostream>

void fillNE_Diag_Down(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    int startValue = 1;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = 0; 
        }
    }

    
    for (int diag = 0; diag < columns; diag++) {
        int row = 0;
        int col = diag;

        while (row < rows && col >= 0) {
            arr[row][col] = startValue++;
            row++;
            col--;
        }
    }

    
    for (int row = 1; row < rows; row++) {
        int col = columns - 1;
        int r = row;
        while (r < rows && col >= 0) {
            arr[r][col] = startValue++;
            r++;
            col--;
        }
    }
}

void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] == 0) {
                std::cout << "  "; 
            }
            else {
                std::cout << arr[i][j] << " "; 
            }
        }
        std::cout << std::endl; 
    }
}
