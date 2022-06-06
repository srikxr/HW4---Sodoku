#include <iostream>
#pragma once
using namespace std;

class Puzzle{
  public:
    virtual ~Puzzle(){};
    friend ostream &operator<<(ostream &out, Puzzle&);
    friend void operator>>(istream &in, Puzzle&);
};