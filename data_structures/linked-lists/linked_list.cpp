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
    newNode->next = nullptr;
    newNode->data = value;

    if (head == nullptr){
      head = newNode;
    } else {
      Node *temp = head;
      while (temp->next != nullptr){
        temp = temp->next; //traverse to the last node
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

int main(void){
  LinkedList list;
  list.append(5);
  /*list.display();*/
  list.append(10);
  /*list.display();*/
  list.append(15);
  list.display();
  return 0;
}










