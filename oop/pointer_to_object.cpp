#include <iostream>
using namespace std;

class Base{
public:
  void display(){
    std::cout << "This is base class." << endl;
  }
};

int main (int argc, char *argv[]) {
  Base *b = new Base;
  b->display();
  delete b;
  return 0;
}
