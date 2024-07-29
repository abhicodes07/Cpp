#include <iostream>
using namespace std;

void Vehicle(string type = "Car", int wheel = 4){ // Defalut arguments with initial value
  if (type == "Bike" and wheel == 2){
    std::cout << "This is a bike." << endl;
  }
  else{
    std::cout << "This is a Car with 4 wheels" << endl;
  }
}

int main () {
  string n = "Bike";
  int w = 2;
  Vehicle(n, w);
  Vehicle();
  return 0;
}
