#include <iostream>
using namespace std;

class Vehicle{
public:
  Vehicle(){
    std::cout << "This is a Vehicle." << endl;
  }
};

class Car:public Vehicle{
public:
  Car(){
    std::cout << "This vehicle is a car." << endl;
  }
};

int main (int argc, char *argv[]) {
  Car c;
  return 0;
}
