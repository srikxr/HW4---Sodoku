
#include "Sudoku.h"

#include <iostream>

Sudoku::Sudoku() {
  
}

void operator<<(istream &sudokuNums, Sudoku *curSudoku) {
  int x = 0;
  int y = 0;
  char c;

  while (sudokuNums && y <= 9) {
    if (x > 9) {
      y++;
      x = 0;
    }
    c = sudokuNums.get();
    if (isdigit(c)) {
      curSudoku->grid[x][y] = c;
      x++;
    }
  }
}


ostream &operator<<(ostream &output, Sudoku *curSudoku) {
  string format = "+-------+-------+-------+\n";
  cout << format;
  for (int i = 0; i < 9; i++) {
    cout << '|';
    for (int j = 0; j < 9; j++) {
      cout << " " << curSudoku->grid[i][j];
      if (j % 3 == 2) {
        cout << " " << '|';
      }
    }
    if (i % 3 == 2) {
      cout << '\n' << format;
    } else {
      cout << '\n';
    }
  }
}
}