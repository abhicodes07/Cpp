#include <iostream>
using namespace std;

// Original Class
class Rectangle{
private:
  int width;
  int height;

public:
  void setDimension(int w, int h){
    width = w;
    height = h;
  }
  // friend class declaration
  friend class Square;
};

// Friend class definition
class Square{
public:
  int calculateArea(Rectangle &obj){
    return obj.width*obj.height;
  }
  void printDimensions(Rectangle &obj){
    std::cout << "Width: " << obj.width << "Height: " << obj.height << endl;
  }
};

// Main
int main(){
  Rectangle rect;
  rect.setDimension(5, 10);
  Square sq;
  std::cout << "Area of Rectangle: " << sq.calculateArea(rect) << endl;
  sq.printDimensions(rect);
  return 0;
}

