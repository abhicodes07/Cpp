#include <iostream>

using namespace std;

// Declaring class using class keyword

class Employee{
  private:
    int a, b, c; // These variables are only accessible to functions inside class    
  public:
    int d, e; // accessible to all code publically
    
    // Declaring functions
    void setData(int a1, int b1, int c1);
    void getData(){
    std::cout << "The value of a: "<< a << endl;
    std::cout << "The value of b: "<< b << endl;
    std::cout << "The value of c: "<< c << endl;
    std::cout << "The value of d: "<< d << endl;
    std::cout << "The value of e: "<< e << endl;
  }
};

//Defining function outside of a class that is declared inside of a class
void Employee :: setData(int a1, int b1, int c1){
  a = a1;
  b = b1;
  c = c1;
}

int main () {
  Employee sam;
  sam.d = 10;
  sam.e = 20;
  sam.setData(30, 40, 50);
  sam.getData();
  return 0;
}


