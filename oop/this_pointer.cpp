#include <iostream>
using namespace std;

class Employee{
private:
  string name;
  int age;
public:
  Employee& setData(string name, int age){
    this->name = name;
    this->age = age;
    return *this; //returns the current object
  }

  void showData(){
    std::cout << "Name: " << name << endl << "Age: " << age << endl;
  }
};

int main (int argc, char *argv[]) {
  Employee e;
  e.setData("flynn", 25).showData(); //chaining method call using this pointer
  return 0;
}
