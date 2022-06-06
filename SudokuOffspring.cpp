#include "SudokuOffspring.h"
#include "Reproduction.h"
#include "Sudoku.h"
#include <ctime>
#include <random>

SudokuOffspring::SudokuOffspring(Sudoku &puzzle) {
  // first know the values that need to be changed by using 2d array[][] of bool
  // or vector goes through a the orginal puzzle and finds the value of zero
  // that needs to be changed.

  srand(time(0));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      int curIndex = puzzle.getValue(i, j);
      // if(curIndex == 0){
      //   valueChange[i][j] = false;
      // }
      // else{
      //   valueChange[i][j] = true;
      // }
      valueChange[i][j] = (curIndex != 0);
    }
  }
}

Puzzle *SudokuOffspring::makeOffspring(Puzzle &puzzle) {
  // dynamic casting.
  // first know the values that need to be changed by using 2d array[][] of bool
  // or vector; then create a new sudoku puzzle; copy the old puzzle to new
  // puzzle; then check to see if the puzzle is going to
  Sudoku sudokupuzzle = dynamic_cast<Sudoku &>(puzzle);

  // creating new sudoku puzzle.
  Sudoku *newPuzzle = new Sudoku();

  const int probability = 5;    
  
  // copy the old puzzle to new puzzle and mutating the value by using the
  // rand() value.
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if ((valueChange[i][j] == false) && (rand() % 100 < probability)) {
        newPuzzle->setValue(i, j, (rand() % 9 + 1));
      } else {
        int curIndex = sudokupuzzle.getValue(i, j);
        newPuzzle->setValue(i, j, curIndex);
      }
    }
  }
  return newPuzzle;
};

// goes through a the orginal puzzle and finds the value of zero that needs to
// be changed. for(int i =0; i < 9; i++){
//   for(int j = 0; j <9; j++){
//   int curIndex = sudokupuzzle.getValue(i,j);
//       if(curIndex == 0){
//         valueChange[i][j] = false;
//       }
//     }
//   }