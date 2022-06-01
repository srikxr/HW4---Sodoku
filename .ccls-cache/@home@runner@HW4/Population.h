#include "Fitness.h"
using namespace std;

class Population{
  public:
      virtual void cull(double percent) = 0;
      virtual void newGeneration() = 0;
      virtual int bestFitness() = 0;

      Population() = default;
}