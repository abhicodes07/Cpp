#include <iostream>

using namespace std;
int main () {
  int num;
  std::cout << "Enter the number: " << endl;;
  std::cin >> num;
  if (num%2 == 0) {
    std::cout << "The number is even." << endl;
  }
  else {
  std::cout << "The number is odd." << endl;
  }

  return 0;
}
