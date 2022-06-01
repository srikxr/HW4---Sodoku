#include "Puzzle.h"
#include <iostream>
using namespace std;

Puzzle::~Puzzle() {
}

ostream &operator<<(ostream &out, const Puzzle &puzzle) {
    return puzzle.output(out);
}

istream &operator>>(istream &in, Puzzle &puzzle) {
    return puzzle.input(in);
}