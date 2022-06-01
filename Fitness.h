#pragma once

#include "Puzzle.h"

class Fitness {
public: 
    int howFit(Puzzle*);
    virtual ~Fitness() = default;
}