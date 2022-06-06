
#include "Sudoku.h"

#include <iostream>

Sudoku::Sudoku() {
  // for(int i = 0; i < 9; i++){
  //   for(int )
  // }
}

Sudoku::~Sudoku(){
  
}

int Sudoku::getValue(int x, int y){
  return grid[x][y];
}
void Sudoku:: setValue(int x, int y, int value){
  grid[x][y] = value;
}

void operator>>(istream &sudokuNums, Sudoku& sudoku) {
  int x = 0;
  int y = 0;
  char c;

  while (y <= 9) {  //error here?
    if (x > 9) {
      y++;
      x = 0;
    }
    c = sudokuNums.get();
    if (isdigit(c)) {
      sudoku.grid[x][y] = c;
      x++;
    }
  }
}

ostream& operator<<(ostream &output, Sudoku& sudoku) {
  string format = "+-------+-------+-------+\n";
  output << format;
  for (int i = 0; i < 9; i++) {
    output << '|';
    for (int j = 0; j < 9; j++) {
      output << " " << sudoku.grid[i][j];
      if (j % 3 == 2) {
        output << " " << '|';
      }
    }
    if (i % 3 == 2) {
      output << '\n' << format;
    } else {
      output << '\n';
    }
  }
  return output;
}
