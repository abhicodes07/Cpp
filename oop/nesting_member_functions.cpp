#include <iostream>
using namespace std;

class Person{
public:
  string name;
  int age;

public:
  Person(string n, int a){
    name = n;
    age = a;
  }

  void details(){
    std::cout << "His name is " << name << " and age is " << age << "." << endl;
  }

  void greet(){
    details();
    std::cout << "Hii " << name << endl;
  }
};

int main() {
  Person p("Rohan", 19);
  p.greet();
  return 0;
}
