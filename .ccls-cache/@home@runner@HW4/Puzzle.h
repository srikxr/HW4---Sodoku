#include <iostream>

using namespace std;

class Puzzle{
  private:

  public:
    virtual void operator << (Puzzle);
    virtual void operator >> (ostream);
};