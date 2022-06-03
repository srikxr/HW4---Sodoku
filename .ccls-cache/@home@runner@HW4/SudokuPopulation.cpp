#include "Sudoku.h"
#include "SudokuFactory.h"
#include "SudokuPopulation.h"
#include "Fitness.h"
#include "SudokuFitness.h"
#include <queue>

//We need to proitity queue to store the population.
// the priority queue

// We need to find the best fit in the puzzle.
// we to generate new generation out of the 100, 10 best class.
// find the best puzzle in the poplulation.

priority_queue<Sudoku*> numbers;

//generates the number of sudokus from the populationsize.
// it needs to fill the sudokus with o 
SudokuPopulation::SudokuPopulation(int populationSize, Puzzle* puzzle){
  
  for(int i =0; i < populationSize; i++){
    Puzzle* p = puzzlefactory->createPuzzle(puzzle);
  }
  
}

void SudokuPopulation:: cull(double percent){
  priority_queue<int> num;
  
}