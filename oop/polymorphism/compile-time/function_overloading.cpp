#include <iostream>
using namespace std;

class Student{
private:
  string name;
  int age;
public:
  Student(string name, int age){
    this->name = name;
    this->age = age;
  };

  void display(){
    std::cout << "Name: " << name << endl;
    std::cout << "Age: " << age << endl;
    std::cout << endl;
  }
  void display(string course){
    std::cout << "Name: " << name << endl;
    std::cout << "Age: " << age << endl;
    std::cout << "Course: " << course << endl;
    std::cout << endl;
  }

  void display(int fees){
    std::cout << "Name: " << name << endl;
    std::cout << "Age: " << age << endl;
    std::cout << "Fees: " << fees << endl;
    std::cout << endl;
  }
};

int main (int argc, char *argv[]) {
  Student s("Sam", 22);
  s.display();
  s.display("BCA");
  s.display(22000);
  return 0;
}






