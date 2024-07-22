#include <iostream>

using namespace std;

class Box{
private:
  double width;

public:
  void setWidth(double w){
    width = w;
  }

  friend void printWidth(Box box);
};

void printWidth(Box box){
  std::cout << "Width of box : " << box.width << endl;
}

int main (int argc, char *argv[]) {
  Box box;
  box.setWidth(10);
  box.printWidth(box);
  return 0;
}
