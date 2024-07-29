#include <iostream>
using namespace std;

class Student{
public:
  string name;
  int rno;

public:
  Student(){
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Roll Number: ";
    std::cin >> rno;
  }

  //copy constructor
  Student(Student &obj){
    name = obj.name;
    rno = obj.rno;
    std::cout << "Copy constructor called!" << endl;
  }

  void display(){
    std::cout << "Name is " << name << " Roll number is " << rno << endl;
  }
};


int main (int argc, char *argv[]) {
  Student s;
  Student s2(s);
  s2.display();
  return 0;
}
