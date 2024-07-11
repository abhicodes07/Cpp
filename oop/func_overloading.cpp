#include <iostream> 
using namespace std;

// Function overloading in c++ is creating several functions with same name 
// but different argument list
int sum(int a, int b){
  std::cout << "Using function with 2 arguments" << endl;
  return a+b;
}

int sum(int a, int b, int c){
  std::cout << "using function with 3 arguments" << endl;
  return a+b+c;
}

// Finding volume with same function 
int volume(int r, int h){
  return (3.14*r*r*h);
}

int volume(int a){
  return (a*a*a);
}

int volume(int l, int b, int h){
  return (l*b*h);
}

int main(){
  std::cout << "The sum of 3 and 6 is: \n" << sum(3, 6) << endl;
  std::cout << "The sum of 4, 8 and 10 is: \n" << sum(4, 8, 10) << endl;
  std::cout << "The volume of cylinder with radius 4 and height 8: " << volume(4, 8) << endl;
  std::cout << "The volume of cube with side 5: " << volume(5) << endl;
  std::cout << "The volume of rectangle with length 2, height 4 and width 18: " << volume(2, 4, 18) << endl;
  return 0;
}
