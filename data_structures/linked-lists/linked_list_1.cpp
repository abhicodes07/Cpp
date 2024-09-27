#include <iostream>
using namespace std;

/*Create structure of node*/
struct Node {
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

    if(head == nullptr){
      head = newNode;
    } else {
      Node *temp = head;
      /*Traverse the last node*/
      while(temp->next != nullptr){
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
  list.append(5);
  list.append(10);
  list.append(15);
  list.append(20);
  list.append(25);
  list.display();
  return 0;
}







