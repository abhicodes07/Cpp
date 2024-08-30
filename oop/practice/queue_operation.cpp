#include <iostream>
#define MAX 1000

using namespace std;

class Queue{
public:
  int HEAD = 0;
  int TAIL = 0;
public:
  int arr[MAX];

  Queue(){
    HEAD = -1;
    TAIL = -1;
  }

  void Enqueue(int x){
    if (TAIL >= MAX) {
      std::cout << "Overflow!" << endl;
    }
    else {
      TAIL += 1;
      arr[TAIL] = x;
      std::cout << x << " Enqueued!" << endl;
    }
  }

  void Dequeue(){    
    HEAD += 1;

    if (HEAD > TAIL){
      std::cout << "Underflow!" << endl;
    }

    else{
      int val = arr[HEAD];
      std::cout << val << " Dequeue!" << endl;
    }
    
  }
};

int main () {
  Queue queue;
  queue.Enqueue(10);
  queue.Enqueue(20);
  queue.Enqueue(30);
  queue.Enqueue(40);
  std::cout << "TAIL: " << queue.TAIL << endl;
  queue.Dequeue();
  queue.Dequeue();
  queue.Dequeue();
  queue.Dequeue();
  queue.Dequeue();
  std::cout << "HEAD: " << queue.HEAD << endl;
  return 0;
}
