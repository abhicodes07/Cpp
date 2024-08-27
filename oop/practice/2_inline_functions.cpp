#include <iostream>
using namespace std;

inline int product(int a, int b){
  return a*b;
}

int main (int argc, char *argv[]) {
  std::cout << "The product of 3 and 4 is: " << product(3, 4);
  return 0;
}
