#include "Puzzle.h"
#include <iostream>
using namespace std;

// Puzzle::~Puzzle() {
  
// }

ostream &operator<<(ostream &out, const Puzzle &puzzle) {
    puzzle.print(out);
    return out;
}

istream &operator>>(istream &in, Puzzle &puzzle) {
    puzzle.in(in);
    return in;
}