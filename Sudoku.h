#pragma once
#include "Puzzle.h"
#include <map>
using namespace std;

class Sudoku : public Puzzle {
  public:
    Sudoku();
    ~Sudoku();

    int grid[9][9];  //return to private

    int getValue(int, int);
    void setValue(int, int, int);


    friend void operator>>(istream &sudokuNums, Sudoku&);
    friend ostream &operator<<(ostream &output, Sudoku&);
};