#include "iostream"
using namespace std;

int main (int argc, char *argv[]) {

// This is a program to print a factorial of a number
  int num;
  int factorial = 1;
  std::cout << "Enter the number: ";
  std::cin >> num;

  for (int i = num; i > 0; i--) {
      factorial *= i;
  }
  std::cout << "Factorial: " << factorial << endl;


  return 0;
}


