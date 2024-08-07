#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  // allocate memory for a single integer
  int *p = new int;
  *p = 20;
  std::cout << "Value of allocated memory: " << *p << endl;
  delete p; //deallocate memory
  
  // allocate memory for array of integers
  int *arr = new int[10]; // allocating 10 contagious array of memory
  for (int i=0; i<10; i++) {
    arr[i+1] = i;
    std::cout << arr[i] << " ";
  }

  std::cout << endl;
  delete[] arr; //deallocate memory
  return 0;
}
