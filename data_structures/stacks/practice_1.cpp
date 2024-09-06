#include <iostream>
#define MAX 1000
using namespace std;

class Stack{
  int TOP;

public:
  int arr[MAX];
  
  Stack(void){
    TOP = -1;
  }

  void PUSH(int x){
    if (TOP > MAX - 1){
      std::cout << "Overflow!" << endl;
    } else {
      TOP += 1;
      arr[TOP] = x;
      std::cout << x << " inserted into stack." << endl;
    } } void POP(void){ if (TOP < 0){ std::cout << "Underflow!" << endl; } else { TOP -= 1;
      int val = arr[TOP + 1];
      std::cout << val << "deleted from stack." << endl;
    }
  }
};


// Main
int main (int argc, char *argv[]) {
  Stack stack;
  stack.PUSH(10);
  stack.PUSH(20);

  stack.POP();
  return 0;
}


