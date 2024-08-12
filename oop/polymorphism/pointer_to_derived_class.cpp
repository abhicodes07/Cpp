#include <iostream>
using namespace std;

class Base{
public:
  int var = 0;
public:
  void display(){
    std::cout << "Base class." << endl;
    std::cout << "Value: " << var << endl;
  }
};

class Derived: public Base{
public:
  void display(){
    std::cout << "Derived class." << endl;
    std::cout << "Value of variable in class: " << var << endl;
  }
};

int main (int argc, char *argv[]) {
  Derived *dptr = new Derived;
  dptr->display(); // outputs: Derived class since the pointer with the type of Derived class is pointing towards
  // Derived class object. Hence, the display function of Derived class is invoked
  return 0;
}
