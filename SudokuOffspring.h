#pragma once
#include "Reproduction.h"

#include <memory>
using namespace std;

class SudokuOffspring : public Reproduction {
public:
    Puzzle* makeOffspring(Puzzle* p) override;
};

