#include "Puzzle.h"
#include <map>
using namespace std;

class Sudoku : public Puzzle {
  private:
    map<pair<int,int>, int> grid;
  public:
    Sudoku();
    ~Sudoku();

    bool isValidChar(char c);

    friend istream& operator>>(istream& input);
    friend ostream& operator<<(ostream& output);
}