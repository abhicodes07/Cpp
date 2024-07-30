#include <iostream>
using namespace std;

class Base{ // Base class or super class
public:
  // Data Member
  int publicvar;

public:
  // Member functions
  void display(){
    std::cout << "The value of Public variable: " << publicvar << endl;
  }
};

class Derived:public Base{ // Derived class
public:
  // Member functions of Derived class 
  void displayVar(){
    display();
  }
  void modifyVar(int n){
    publicvar = n;
  }
};

int main (int argc, char *argv[]) {
  Derived d;
  d.displayVar();
  d.modifyVar(5);
  d.display();
  return 0;
}
