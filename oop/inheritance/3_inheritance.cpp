#include <iostream>
using namespace std;

class Base{
public:
  Base(){
    std::cout << "Constructor of a Base class invoked!" << endl;
  }
};

class Derived:public Base{
public: 
  Derived(){
    std::cout << "Constructor of Derived class invoked!" << endl;
  }
};

int main (int argc, char *argv[]) {
  Derived d;
  return 0;
}

