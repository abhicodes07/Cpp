#include <iostream>
using namespace std;

int x = 40; // global variable

int main(){
  int x = 20;
  std::cout << "The Value of local x: " << x << endl;
  std::cout << "The Value of global of x: " << ::x << endl;
  return 0;
}

