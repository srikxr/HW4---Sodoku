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

    friend istream& operator>>(istream& input);
    friend ostream& operator<<(ostream& output);
}