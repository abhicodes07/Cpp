#include <iostream>

using namespace std;

class Vehicle{
  public: 
    Vehicle(){
      std::cout << "This is a vehicle." << endl;
  }
};

class FourWheeler: public Vehicle{
public:
  FourWheeler(){
    std::cout << "This is a four wheeler Vehicle." << endl;
  }
};

class Car: public FourWheeler{
  public:
    Car(){
    std::cout << "This car is a four wheeler vehicle." << endl;
  }
};

int main (int argc, char *argv[]) {
  Car c;
  return 0;
}
