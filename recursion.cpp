#include <iostream>
using namespace std;

int factorial(int num);
int factorial(int num){
  if (num == 0) {
    return 0;
  }
  else if (num == 1) {
    return 1;
  }
  else {
    return num * factorial(num - 1);
    // std::cout << num * factorial(num - 1);
  }
  return 0;
}

int main(){
  int num;
  std::cout << "Enter the number: ";
  std::cin >> num;
  // factorial(num);
  std::cout << "Factorial of a number: " << factorial(num) << endl;
  return 0;
}





