#ifndef STD2DARRAYS_H
#define STD2DARRAYS_H

#include <array>
#include <stdexcept>

const int MAXNUMBEROFROWS = 5; 
const int MAXNUMBEROFCOLUMNS = 5; 

void fillNE_Diag_Down(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);

#endif // STD2DARRAYS_H
