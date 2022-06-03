#pragma once

#include "Puzzle.h"

class Fitness {
public: 
    virtual int howFit(Puzzle&) = 0;
    virtual ~Fitness() = default;
};