#include <iostream>

using namespace std;

class Vehicle{ // Base class
public:
  Vehicle(){ //constructor of a base class
    std::cout << "This is a Vehicle\n" << "This is a constructor of a base class" << endl;
  }
};

class Car:public Vehicle{ // Derived class
}; 

// main 
int main () {
  // creating obejct out of derived class will invoke the 
  // constructor of a Base class 
  Car c;
  return 0;
}
