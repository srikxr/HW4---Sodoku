#pragma once
#include "Puzzle.h"
#include <map>
using namespace std;

class Sudoku : public Puzzle {
  private:
    int grid[9][9];
    int x;
    int y;
  public:
    Sudoku();
    ~Sudoku();
    
    int getValue(int, int);
    void setValue(int, int, int);


    void operator>>(istream &sudokuNums);
    ostream &operator<<(ostream &output);
};