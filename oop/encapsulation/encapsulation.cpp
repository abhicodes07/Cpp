#include <iostream>
using namespace std;

class Circle{
public:
  double radius;
  double area;
public:
  void getRadius(){
    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;
  }

  void getArea(){
    area = 3.14*radius*radius;
    std::cout << "Area of circle: " << area << endl;
  }
};

int main (int argc, char *argv[]) {
  Circle c;
  c.getRadius();
  c.getArea();
  return 0;
}

