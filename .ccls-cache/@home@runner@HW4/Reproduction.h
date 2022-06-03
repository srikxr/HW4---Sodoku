#pragma once

#include "Puzzle.h"

using namespace std;

class Reproduction {
public:
    virtual Puzzle* makeOffspring(Puzzle* &p) = 0;
    virtual ~Reproduction() = default;
}; 