#pragma once
#include "Sudoku.h"
#include "Population.h"
#include "SudokuFitness.h"
#include <queue>
using namespace std;

struct compare{
  bool operator()(Sudoku& a, Sudoku& b){
    SudokuFitness* sudFit;
    return sudFit->howFit(a) < sudFit->howFit(b);
  }
};

class SudokuPopulation : public Population {
private:
  priority_queue<Sudoku*, vector<Sudoku*>, compare> sudokuMembers;
    SudokuFitness* sudokuFit;
public:
      SudokuPopulation(int populationSize, Sudoku* sudoku);
      void cull(double percent) override;
      void newGeneration() override;
      int bestFitness() override;
      Puzzle* bestIndividual() override;
};