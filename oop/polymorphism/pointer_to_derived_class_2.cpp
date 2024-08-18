#include <iostream>
using namespace std;

class Student{
public:
  string name;
  int id;

public:
  void setData(string n, int i){
    name = n;
    id = i;
  }

  void getData(){
    std::cout << "Name: " << name << endl;
    std::cout << "Id: " << id << endl;
  }
};

class Greet: public Student{
public:
  void getData(){
    std::cout << "Hello " << name << "!" << endl;
  }
};

int main (int argc, char *argv[]) {
  Greet *objPtr;
  Greet obj;
  objPtr =  &obj;
  objPtr->setData("Abhi", 102);
  objPtr->getData();

  return 0;
}
