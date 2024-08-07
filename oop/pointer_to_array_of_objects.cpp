#include <iostream>

using namespace std;

class Student{
  string name;
  int age;
public:
  void setData(string n, int a){
    name = n;
    age = a;
  }

  void getData(void){
    std::cout << "\nName of student: " << name << endl;
    std::cout << "Age of student: " << age << endl;
  }
};

int main (int argc, char *argv[]) {
  int size = 3;
  Student *ptr = new Student[size];
  Student *ptrtemp = ptr;
  int i, q;
  string p;

  for (i=0; i<3; i++) {
    std::cout << "Enter the name of student: ";
    std::cin >> p;
    /*std::cout << endl;*/
    std::cout << "Enter the age of student: ";
    std::cin >> q;
    std::cout << endl;
    ptr->setData(p, q);
    ptr++;
  }

  for (i=0; i<3; i++) {
    ptrtemp->getData();
    ptrtemp++;
  }
  return 0;
}


