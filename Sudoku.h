#include "Puzzle.h"
#include <map>
using namespace std;

class Sudoku : public Puzzle {
  private:
    int grid[9][9];
  public:
    Sudoku();
    ~Sudoku();

    bool isValidChar(char c);

    friend void operator<<(istream &sudokuNums, Sudoku* curSudoku);
    friend ostream &operator<<(ostream &output, Sudoku* curSudoku);
    //friend istream& operator>>(istream& input);
    //friend ostream& operator<<(ostream& output);
}