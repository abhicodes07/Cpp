#include <iostream>
using namespace std;
// Base   -> Derived 
// Public -> Public = Public
// Public -> Private = Private
// Public -> Protected = Protected

class Base{
public:
  int a;
private:
  int b;
protected:
  int c;
};

class Derived:public Base{
public:
  void display(){
    std::cout << a;
    // since b is private in base it is not accessible
    /*std::cout << b;*/
    std::cout << c;
  }
};


int main (int argc, char *argv[]) {
  Derived d;
  d.display();
  return 0;
}

