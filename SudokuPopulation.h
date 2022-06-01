#include "Sudoku.h"
#include "Population.h"
using namespace std;

class SudokuPopulation : public Population {
public:
      SudokuPopulation(int population, Puzzle& puzzle);
      void cull(double percent) override;
      void newGeneration() override;
      int bestFitness() override;
}