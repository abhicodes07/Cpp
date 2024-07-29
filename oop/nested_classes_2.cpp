#include <iostream>
using namespace std;

class Student{
public:
  class Toppers{
  public:
    string name;
    int rno;
  public:
    Toppers(){
      std::cout << "THIS IS A INNER CLASS" << endl;
      std::cout << "Enter the name of the topper: ";
      std::cin >> name;
      std::cout << "Enter the roll no: ";
      std::cin >> rno;
    }

    void showTopper(){
      std::cout << "Name: " << name << "\nRoll no.: " << rno << endl;
    }
  };
  
public:
  Student(){
    std::cout << "THIS IS A OUTER CLASS CONSTRUCTOR" << endl;
  }
};

int main(){
  Student s;
  Student::Toppers top;
  top.showTopper();
  return 0;
}
