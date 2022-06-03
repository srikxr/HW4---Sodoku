#pragma once
#include "Reproduction.h"
#include "Sudoku.h"

using namespace std;

class SudokuOffspring : public Reproduction {
public:
    Puzzle* makeOffspring(Puzzle &puzzle);
    SudokuOffspring(Sudoku &puzzle);
    bool valueChange[9][9];
};

