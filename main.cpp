#include "Sudoku.h"
#include "SudokuPopulation.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  //int populationSize = atoi(argv[1]);
  //int maxGeneration = atoi(argv[2]);
  cout << "Enter the Sudoku Input with 0's representing blank spaces: ";

  Sudoku test;
  cin >> test;
  
  cout << test;

  // Sudoku* testpuzzle = new Sudoku();

  // SudokuPopulation(populationSize, testpuzzle);
}