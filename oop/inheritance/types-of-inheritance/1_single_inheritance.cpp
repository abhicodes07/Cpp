#include <iostream>
using namespace std;


/*In single inheritance only one class is inherited from the base class*/

class Vehicle{
public:
  Vehicle(){
    std::cout << "This is a vehicle." << endl;
  }
};

class Car:public Vehicle{
public:
  Car(){
    std::cout << "This vehicle is a car" << endl;
  }
};

int main(){
  Vehicle v;
  Car c;
  return 0;
}

