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
  Base *basePtr; // Base class pointer
  Base base_obj; // Base class object
  Derived derived_obj; // Derived class object

  basePtr = &derived_obj; // Here base class pointer is pointing towards derived class object
  basePtr->display(); // Outputs: Base class

  /*Here, the function that will invoke will be of base class because the compiler determines*/
  /*the function call based on the type of pointer (base*), not the actual object type (&Derived)*/

  basePtr->var = 4;
  basePtr->display();
  return 0;
}
