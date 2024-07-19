#include <iostream>
using namespace std;

inline int add(int a, int b){
  return a+b;
}


int main(){
  
  std::cout << "The addition of two numbers 6 and 7 is: " << add(6, 7) << endl;

  return 0;
}

