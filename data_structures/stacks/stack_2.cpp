#include <iostream>
#define MAX 1000
using namespace std;

class Stack{
private:
  int TOP = 0;

public:
  int arr[MAX];

  Stack(void){
    TOP = -1;
  }

  void PUSH(int value){
    if (TOP > MAX - 1){
      cout << "Overflow!" << endl;
    } else {
      TOP += 1;
      arr[TOP] = value;
      cout << value << " inserted in stack." << endl;
    }
  }

  void POP(void){
    if (TOP < 0){
      cout << "Underflow!" << endl;
    } else {
      TOP -= 1;
      cout << arr[TOP + 1] << " deleted from stack." << endl;
    }
  }

  void DISPLAY(void){
    for(int i=0; i<=TOP; i++){
      cout << arr[i] << " ";
    }
    cout << " null" << endl;
  }
};

int main () {
  Stack stack;
  stack.PUSH(10);
  stack.PUSH(20);
  stack.PUSH(30);
  stack.PUSH(40);
  stack.PUSH(50);
  stack.DISPLAY();
  return 0;
}


