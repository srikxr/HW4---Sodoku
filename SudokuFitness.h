#pragma once
#include "Fitness.h"
#include "Sudoku.h"

#include <algorithm>
#include <vector>

using namespace std;

class SudokuFitness : public Fitness{
  int howFit(Puzzle&);
}