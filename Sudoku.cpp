#include "Sudoku.h"
#include <iostream>

Sudoku(){
  
}

//bool isValidChar(char c) {};

void operator << (istream sudokuNums){
  int x = 0;
  int y = 0;
  while(sudokuNums){
    for(int i = 0; i < 9; i++){
      //nextC = next character in text
      //char c
      // for(...) { if(isValidChar(c)) {grid.insert(pair<pair<int, int>, int> ((x,y),   nextC)) }}
      grid.insert(pair<pair<int, int>, int> ((x,y), nextC))
      x++;
    }
    y++;
  }
}

ostream& operator<<(ostream& output) {
  string format = " +------+------+------+\n";
  cout << format;
  for (int i=0; i<9; i++) {
    cout << "|"; //places at the start
    for (int x=0; x<9; x++) {
      
    }
  }
}