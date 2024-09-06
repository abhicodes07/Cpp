#include <iostream>
#define MAX 1000

using namespace std;

class Stack{
  int TOP = 0;
public:
  int arr[MAX];
  
  Stack(){
    TOP = -1;
  }

  void Push(int x){
    if (TOP >= MAX) {
      std::cout << "Overflow!" << endl;
    }
    else {
      TOP += 1;
      arr[TOP] = x;
      std::cout << x << " inserted into stack." << endl;
    }
  }

  void Pop(){
    if (TOP == -1){
      std::cout << "Underflow" << endl;
    }
    else {
      TOP = TOP - 1;
      int x = arr[TOP+1];
      std::cout << x << endl;
    }
  }
};

int main (int argc, char *argv[]) {
  Stack stack;
  stack.Push(10);
  stack.Push(20);
  stack.Push(30);
  stack.Pop();
  stack.Pop();
  stack.Pop();
  stack.Pop();
  return 0;
}






