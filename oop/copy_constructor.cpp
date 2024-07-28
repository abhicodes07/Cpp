#include <iostream>

using namespace std;

class Student{
  int rno;
  string name;
  double per;
public:
  // Defalut constructor
  Student(){
    std::cout << "This is a constructor method that is invoked when a object is created out of a class" << endl; 
  }

  // parameterized constructor 
  Student(int, string, double);

  //copy constructor
  Student(Student &t){
    rno = t.rno;
    name = t.name;
    per = t.per;
  }

  void display(){
    // Function to display information
    std::cout << name << "\t" << rno << "\t" << per << endl;
  }
};

// parameterized constructor implemention
Student::Student(int r, string n, double p){
  rno = r;
  name = n;
  per = p;
}

// main 
int main () {
  Student s(102, "Abhinav", 82.6);
  Student s1;
  Student s2(s); // copy constructor object
  s.display();
  s2.display();
  return 0;
}
