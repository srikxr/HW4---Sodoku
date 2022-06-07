#include "SudokuFactory.h"
#include "SudokuOffspring.h"


Puzzle* SudokuFactory::createPuzzle(Puzzle* p){
  // Sudoku* sudoku = dynamic_cast<Sudoku*>(p);
  // SudokuOffspring* test = dynamic_cast<SudokuOffspring*>(reproduction);
  
   return reproduction->makeOffspring(p);
}

//new generation calls sudokufoctary();
//to reproduce 100 out of 10;

SudokuFactory::SudokuFactory(SudokuOffspring &sudokuoffspring){
  reproduction = &sudokuoffspring;
}