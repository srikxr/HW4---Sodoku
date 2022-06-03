#pragma once
#include "PuzzleFactory.h"
#include "SudokuOffspring.h"


class SudokuFactory : public PuzzleFactory{
public:
  SudokuFactory(SudokuOffspring &sudokuoffspring);
  Puzzle* createPuzzle(Puzzle* &p);
// protected:
//   Reproduction* reproduction;
};