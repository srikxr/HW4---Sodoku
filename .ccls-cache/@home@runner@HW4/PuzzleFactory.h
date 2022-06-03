#pragma once
#include "Puzzle.h"
#include "Reproduction.h"

using namespace std;

class PuzzleFactory{
  public:
    virtual Puzzle* createPuzzle(Puzzle* &p);

protected:
  Reproduction* reproduction;
};