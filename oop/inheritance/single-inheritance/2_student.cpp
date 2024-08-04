#include <iostream>
using namespace std;

class Student{
public:
  string name;
  int age;
  int a;
  int b;
  int c;
public:
  Student(){
    std::cout << "Enter the name of student: ";
    std::cin >> name;
    std::cout << "Enter the age: ";
    std::cin >> age;
    std::cout << "Enter the marks of English: ";
    std::cin >> a;
    std::cout << "Enter the marks of maths: ";
    std::cin >> b;
    std::cout << "Enter the marks of science: ";
    std::cin >> c;
  }
};

class Percentage: public Student{
public:
  double per;
  double total;
public:
  void showInfo(){
    std::cout << "Name: " << name << endl << "Age: " << age << endl << "Marks: " << endl << "\tEnglish: " << a << endl << "\tMaths: " << b << endl << "\tScience: " << c << endl;
  }

  void showPer(){
    total = a+b+c;
    per = (total/300)*100;
    std::cout << "Total: " << total << endl << "Percentage: " << per << endl;
  }
};

int main (int argc, char *argv[]) {
  Percentage p;
  p.showInfo();
  p.showPer();
  return 0;
}
