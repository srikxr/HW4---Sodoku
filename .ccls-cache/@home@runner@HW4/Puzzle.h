#include <iostream>
#pragma once
using namespace std;

class Puzzle{
  private:
    // virtual istream &input(istream &in) = 0;
    // virtual ostream &output(ostream &out) const = 0;

  public:
    virtual ~Puzzle();
    virtual ostream &operator<<(ostream &out);
    virtual void operator>>(istream &in);
};