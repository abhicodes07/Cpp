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
    }
  }

  void POP(void){
    if (TOP < 0) {
      std::cout << "Underflow!" << endl;
    } else {
      TOP -= 1;
      int val = arr[TOP + 1];
      std::cout << val << " deleted from stack." << endl;
    }
  }

  void SEARCH(int y){
    int POS = 0;
    int i = 0;

    while (i < MAX){
      if (arr[i] == y) {
        POS = i;
        std::cout << "Value found: " << arr[POS] << "\nPositon: " << POS << endl;
        break;
      } else {
        i += 1;
      }
    }

    if (POS == 0) {
      std::cout << "Value not found!" << endl;
    }
  }

  void DISPLAY(void){
    int j = 0;
    if (TOP == -1){
      std::cout << "Stack empty!" << endl;
    } else {
      while (j <= TOP){
        std::cout << arr[j] << " ";
        j += 1;
      }
      std::cout << endl;
    }
  }
};

int main (int argc, char *argv[]) {
  Stack stack;
  stack.PUSH(10);
  stack.PUSH(20);
  stack.PUSH(30);
  stack.PUSH(40);
  stack.PUSH(50);

  stack.SEARCH(30);
  stack.DISPLAY();

  stack.POP();
  stack.SEARCH(50);
  stack.DISPLAY();
  return 0;
}







