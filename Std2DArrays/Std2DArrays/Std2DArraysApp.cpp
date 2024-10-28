#include <iostream>
#include "Std2DArrays.h"

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr = {}; // Diziyi sýfýrla
    char surnameInitial = 'B'; 
    int rows = MAXNUMBEROFROWS;      
    int columns = MAXNUMBEROFCOLUMNS;   

    // 
    if (surnameInitial >= 'A' && surnameInitial <= 'D') {
        fillNE_Diag_Down(arr, rows, columns); 
    }
    else {
        std::cout << "Invalid input!" << std::endl; 
        return 1;
    }

    printArray(arr, rows, columns); 

    return 0;
}
