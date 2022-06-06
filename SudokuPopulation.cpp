#include "Sudoku.h"
#include "SudokuFactory.h"
#include "SudokuPopulation.h"
#include "Fitness.h"
#include "SudokuFitness.h"

//We need to proitity queue to store the population.
// the priority queue

// We need to find the best fit in the puzzle.
// we to generate new generation out of the 100, 10 best class.
// find the best puzzle in the poplulation.

//generates the number of sudokus from the populationsize.
// it needs to fill the sudokus with o 
SudokuPopulation::SudokuPopulation(int populationSize, Puzzle* puzzle){
  //SudokuFitness sudokuFitness = SudokuFitness();
  populationSize = populationSize;
  for(int i =0; i < populationSize; i++){
    Puzzle* populationPuzzle = puzzlefactory->createPuzzle(puzzle);
    sudokuMembers.push(make_pair(populationPuzzle, fitness->howFit(populationPuzzle)));
  }
}

void SudokuPopulation:: cull(double percent){
  int cullPercent;
  cullPercent = (1- percent) * populationSize;
  
}



int SudokuPopulation::bestFitness(){
  
} 

Puzzle* SudokuPopulation::bestIndividual(){
  
}