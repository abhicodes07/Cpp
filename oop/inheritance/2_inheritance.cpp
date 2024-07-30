// THis is a another example of inheritance in c++

#include <iostream>
#include <string>
using namespace std;


class Student{ // Base class
public:
  string name;
  int rno;
  int per;
  string course;

public:
  // Constructor of a base class 
  Student(){
    std::cout << "Enter the name of student: ";
    std::cin >> name;
    std::cout << "Enter the roll no of a student: ";
    std::cin >> rno;
    std::cout << "Enter the percentage: ";
    std::cin >> per;
    std::cout << "Enter the course name: ";
    std::cin >> course;
  }
};

class Marks:public Student{ // Derived class
  int a;
  int b;
  int c;

public:
  Marks(){ // Constructor of a derived class
    std::cout << "Enter the marks of English: ";
    std::cin >> a;
    std::cout << "Enter the marks of Maths: ";
    std::cin >> b;
    std::cout << "Enter the marks of Science: ";
    std::cin >> c;
  }
  
  void info(){
    // function to display information
    std::cout << rno << "\t" << name << "\t" << per << "\t" << course << "\t" << a << "\t" << b << "\t" << c << "\t" << endl;   
  }
};

// main 
int main() {
  int num_student = 5;
  Marks s1[num_student];
  std::cout << "RNO\tNAME\tPER\tCOURSE\tENG\tMAT\tSCI\t" << endl;
  for (int i = 0; i < num_student; i++) {
    s1[i].info();
  }
  return 0;
}
