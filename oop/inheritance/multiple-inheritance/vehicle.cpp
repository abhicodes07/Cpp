#include <iostream>
using namespace std;

/*This is a program about multiple inheritance in c++ */
/*in which a class is derived from one or more base classes*/
/**/


class Vehicle{
public:
  Vehicle(){
  std::cout << "This is a vehicle." << endl;
  }
};

class FourWheeler{
public:
  FourWheeler(){
    std::cout << "This is a four wheeler vehicle." << endl;
  }
};

class Car:public Vehicle, public FourWheeler{
public:
  Car(){
    std::cout << "This is a four wheeler vehicle car." << endl;
  }
};

int main (int argc, char *argv[]) {
  Car c; // Creating an object out of a derived class will invoke constructors of base classes
  return 0;
}
