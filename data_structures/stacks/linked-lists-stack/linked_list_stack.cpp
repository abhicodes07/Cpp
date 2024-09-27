#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

class Stack{
private:
  Node *top;
public:
  Stack(){
    top = nullptr;
  }

  // Push operation
  void Push(int value){
    Node *newNode = new Node(); // create a new node
    newNode->data = value;
    newNode->next = top; // Make a new node point to current top
    top = newNode; // Update the top to the new node
    cout << value << "pushed to the stack." << endl;
  }

  // display the data
  void Display(){
    Node *temp = top; // contains the value of top which is the upper most node
    while (temp != nullptr){ 
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "null" << endl;
  }

  void Pop(){
    Node *temp = top;
    if (temp == nullptr){
      cout << "Underflow!" << endl;
    } else {
      cout << temp->data << " popped from stack." << endl;
      top = top->next;
      delete temp; // delete the old top node
    }
  }
};

int main(void){
  Stack stack;
  stack.Push(10);
  stack.Push(20);
  stack.Push(30);
  stack.Push(40);
  stack.Push(50);
  stack.Display();
  stack.Pop();
  stack.Pop();
  stack.Pop();
  stack.Pop();
  return 0;
}
