#include <iostream>

using namespace std;

int main(){
  int num;
  std::cout << "Enter the range: ";
  std::cin >> num;
  int a = 0;
  int b = 1;
  std::cout << a << endl;
  std::cout << b << endl;
  for (int i=0; i<=num; i++ ) {
    int x = a + b;
    a = b;
    b = x;
    // std::cout << a << endl;
    // std::cout << b << endl;
    std::cout << x << endl;
  }
  return 0; 
}
