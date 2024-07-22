#include <iostream>
#include <string>

using namespace std;

class Student{
  int rno;
  string name;
  double fee;

public:
  // Constructor intialised
  Student(){ //  Default constructor with same name as class 
    std::cout << "Enter the Roll no: ";
    std::cin >> rno;
    std::cout << "Enter the name: ";
    std::cin >> name;
    std::cout << "Enter the fee: ";
    std::cin >> fee;
  }
  void display(){
    std::cout << endl << rno << "\t" << name << "\t" << fee << endl;
  }
};

/*main*/
int main(){
  Student s;
  s.display();
  return 0;
}


