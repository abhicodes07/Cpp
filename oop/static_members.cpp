#include <iostream>
using namespace std;

class Example{
public:
  static int count;
  Example(){
    count++;
  }

  static void display(){
    std::cout << "Value of static data member function: " << count << endl;
  }
};

int Example::count = 0;

int main (int argc, char *argv[]) {
  Example e1;
  e1.display();
  Example e2;
  e1.display();
  Example e3;
  e3.display();
  return 0;
}
