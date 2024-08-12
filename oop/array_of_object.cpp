#include <iostream>
using namespace std;

class Student{
public:
  string name;
  int age;
  string Fname;
  string Mname;

public:
  Student(){
    std::cout << "Enter the name of the student: ";
    std::cin >> name;

    std::cout << "Enter the age: ";
    std::cin >> age;

    std::cout << "Enter the Father's name: ";
    std::cin >> Fname;

    std::cout << "Enter the Mother's name: ";
    std::cin >> Mname;
    std::cout << endl;
  }

  void showDetails(){
    std::cout << name << "\t" << age << "\t" << Fname << "\t" << Mname << "\t" << endl;
  }
};

class Marks{
public:
  int a;
  int b;
  int c;

public:
  Marks(){
    std::cout << "\nEnter the English marks: ";
    std::cin >> a;

    std::cout << "Enter thee maths marks: ";
    std::cin >> b;
    
    std::cout << "Enter the science marks: ";
    std::cin >> c;
    std::cout << endl;
  }

  void showMarks(){
    std::cout << a << "\t" << b << "\t" << c << endl;
  }
};

class Percentage: public Student, public Marks{
public:
  double total;
  double per;

public:
  void showPer(){
    total = a+b+c;
    per = (total/300)*100;
    std::cout << "\nTotal Marks: " << total << endl;
    std::cout << "Total Percentage: " << per << endl;
  }
};

int main (int argc, char *argv[]) {
  Percentage p[3];

  std::cout << "\n\tSTUDENT DETAILS\n";
  std::cout << "Name\tAge\tFname\tMname" << endl;
  for (int j=0; j<3; j++) {
    p[j].showDetails();
  }

  std::cout << "\n\t\tMARKS" << endl;
  std::cout << "English\tMaths\tScience" << endl;
  for (int i=0; i<3; i++) {
    p[i].showMarks();
  }

  string prompt1;
  int prompt2;
  std::cout << "Do you want to show the Percentage of particular student (y/n): ";
  std::cin >> prompt1;

  if (prompt1 == "y") {
    std::cout << "Enter the student number(0-2): ";
    std::cin >> prompt2;
    p[prompt2].showPer();
  }

  else {
    std::cout << endl << "Thank you!" << endl;
  }

  return 0;
}



