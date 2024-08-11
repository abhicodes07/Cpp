#include <iostream>
using namespace std;

class Employee{
  string name;
  int age;
  int eid;
  string department;
public:
  void setData(string n, int a, int e, string d){
    name = n;
    age = a;
    eid = e;
    department = d;
  }
  void getData(){
    std::cout << "Name: " << name;
    std::cout << "Age: " << age;
    std::cout << "Eid: " << eid;
    std::cout << "Department: " << department;
  }
};


int main (int argc, char *argv[]) {
  int size = 3;
  Employee *ptr = new Employee[size];
  Employee *ptrtemp = ptr;
  int a, e;
  string n, d;
  for (int i = 0 ; i<size ; i++) {
    std::cout << "Enter the name: ";
    std::cin >> n;
    std::cout << "Enter the age: ";
    std::cin >> a;
    std::cout << "Enter the Eid: ";
    std::cin >> e;
    std::cout << "Enter the department: ";
    std::cin >> d;
    ptr->setData(n, a, e, d);
    ptr++;
  }
  for (int j=0 ; j<size; j++) {
    ptrtemp->getData();
    ptrtemp++;
  }
  return 0;
}
