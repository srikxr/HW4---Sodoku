
#include "Sudoku.h"

#include <iostream>

Sudoku::Sudoku() {
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      grid[i][j] = 0;
    }
  }
}

Sudoku::~Sudoku(){
  
}

int Sudoku::getValue(int x, int y){
  return grid[x][y];
}
void Sudoku:: setValue(int x, int y, int value){
  grid[x][y] = value;
}

//istream &Sudoku::read(istream &in) {
// void operator>>(istream &sudokuNums, Sudoku& sudoku) {
//   int x = 0;
//   int y = 0;
//   char c;

//   while (y <= 9) {  //error here?
//     if (x > 9) {
//       y++;
//       x = 0;
//     }
//     c = sudokuNums.get();
//     if (isdigit(c)) {
//       sudoku.grid[x][y] = c;
//       x++;
//     }
//   }
// }

void Sudoku::fillBoard(string input) {
	//get line file
	//for rows
		//for col
			//get num at line 
			//put in square
			//if number > 0
				//set square as fixed
			//set board r/c to square

	int count = 0;

	for (int r = 0; r < 9; r++) {
		for (int c = 0; c < 9; c++) {
			char chr = input.at(count);
			int num = c - 48;
			grid[r][c] = num;
			count++;

		}
	}
}

void Sudoku::print(ostream &out) const {
  Sudoku* sudoku;
  string format = "+-------+-------+-------+\n";
  cout << format;
  for (int i = 0; i < 9; i++) {
    cout << '|';
    for (int j = 0; j < 9; j++) {
      cout << " " << sudoku->grid[i][j];
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

void Sudoku::in(istream& in) {
	string input;
  cin >> input;

	fillBoard(input);

}