#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

class LinkedList{
  private:
    Node *head;
  public:
    LinkedList(void){
      head = nullptr;
  }

  void append(int value){
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr){
      head = newNode;
    } else {
      Node *temp = head;
      while (temp->next != nullptr){
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  void display(void){
    Node *temp = head;
    while (temp != nullptr){
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "null" << endl;
  }
};

int main () {
  LinkedList list;
  list.append(10);
  list.append(20);
  list.append(30);
  list.append(40);
  list.append(50);
  list.display();
  return 0;
}








