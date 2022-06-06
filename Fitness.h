#pragma once

#include "Puzzle.h"

class Fitness {
public: 
    virtual int howFit(Puzzle &puzzle) = 0;
    virtual ~Fitness() = default;
};