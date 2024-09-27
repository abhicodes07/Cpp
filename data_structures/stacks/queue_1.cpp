#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

class Queue{
private: 
  int HEAD = 0;
  int TAIL = 0;

public:
  int arr[MAX];

  Queue(void){
    HEAD = -1;
    TAIL = -1;
  }

  void enqueue(int val){
    if (TAIL > MAX - 1){
      cout << "Overflow!" << endl;
    } else {
      TAIL += 1;
      arr[TAIL] = val;
      cout << val << " enqueued in stack." << endl; 
    }
  }

  void dequeue(void){
    if (HEAD > TAIL - 1){
      cout << "Undeflow!" << endl;
    } else {
      HEAD += 1;
      int value = arr[HEAD];
      cout << value << "dequeued from stack." << endl;
    }
  }
};

int main(void){
  Queue queue;
  queue.enqueue(10);
  queue.enqueue(20);
  queue.enqueue(30);
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  return 0;
}


