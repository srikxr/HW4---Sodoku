#pragma once

#include "Fitness.h"
#include "PuzzleFactory.h"
using namespace std;

class Population{
  public:
      virtual void cull(double percent) = 0;
      virtual void newGeneration() = 0;
      virtual int bestFitness() = 0;
      virtual Puzzle* bestIndividual();
      
      Population() = default;
protected:
  Fitness* fitness;
  PuzzleFactory* puzzlefactory;
  int populationSize;
};