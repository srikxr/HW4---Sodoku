#pragma once

#include "Puzzle.h"

using namespace std;

class Reproduction {
public:
    virtual Puzzle* makeOffspring(Puzzle* &p);
    virtual ~Reproduction() = default;
}; 