#include <iostream>
#include <fstream>
#include "Sudoku.h"
#include "SudokuPopulation.h"
using namespace std;

int main(int argc, char* argv[]) {
  int populationSize = atoi(argv[1]);
  int maxGeneration = atoi(argv[2]);
  cout << "Enter the Sudoku Input with 0's representing blank spaces: ";
   
    string file;
    cin >> file;

    for (int i = 0; i <= file.size(); i++) {
      int grid[9][9];
      grid.push(file[i]);
    }
  cout << file;
  
 // Sudoku* testpuzzle = new Sudoku();
  
  //SudokuPopulation(populationSize, testpuzzle);
}