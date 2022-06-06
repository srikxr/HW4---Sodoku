#pragma once
#include "Sudoku.h"
#include "Population.h"
#include <queue>
using namespace std;

class SudokuPopulation : public Population {
private:
  priority_queue<pair<Sudoku&, int>> sudokuMembers;
  //priority_queue<Sudoku&> sudokuMembers;  //prob change this so that its ordered by fitness
public:
      SudokuPopulation(int populationSize, Puzzle* puzzle);
      void cull(double percent) override;
      void newGeneration() override;
      int bestFitness() override;
      Puzzle* bestIndividual() override;
};