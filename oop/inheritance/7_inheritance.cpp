#include <iostream>
using namespace std;

class Company{
public:
  string cmp_name;
  string Departments;
  int ID;
  int Employees;
public:
  Company(string cn, string d, int i){
    cmp_name = cn;
    Departments = d;
    ID = i;
  }

  void showCompany(){
    std::cout << "Company name: " << cmp_name << endl;
    std::cout << "Department: " << ;
  }
}
