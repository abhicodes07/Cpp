#include <iostream>
using namespace std;

int main () {
  int num;
  std::cout << "Enter the number: ";
  std::cin >> num;
  int flag = 0;

  if (num == 0 || num == 1) {
  flag = 1;
  }
  
  for (int i=2; i<num; i++) {
    if (num % i == 0){
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    std::cout << "Number is prime." << endl;
  }
  else {
    std::cout << "Number is not prime." << endl; 
  }
  return 0;
}
