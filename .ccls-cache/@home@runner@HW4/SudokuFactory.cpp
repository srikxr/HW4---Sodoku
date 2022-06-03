#include "SudokuFactory.h"
#include "SudokuOffspring.h"


Puzzle* SudokuFactory:: createPuzzle(Puzzle* &p){
   return reproduction->makeOffspring(p);
}

//new generation calls sudokufoctary();
//to reproduce 100 out of 10;

SudokuFactory::SudokuFactory(SudokuOffspring &sudokuoffspring){
  reproduction = &sudokuoffspring;
}