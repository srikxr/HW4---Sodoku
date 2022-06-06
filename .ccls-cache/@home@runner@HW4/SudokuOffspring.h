#pragma once
#include "Reproduction.h"
#include "Sudoku.h"

using namespace std;

class SudokuOffspring : public Reproduction {
public:
    SudokuOffspring(Puzzle &puzzle);
    Puzzle* makeOffspring(Puzzle &puzzle);
    bool valueChange[9][9];
};

