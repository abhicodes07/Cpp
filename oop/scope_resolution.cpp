#include <iostream>
#include <string>
using namespace std;

int x = 40; // global variable

class Employee{
  private:
    string name;
    int id;
  public:
    void setData(string emp_name, int emp_id);
    void printData(){
      std::cout << "Name of employee: " << name << endl;
      std::cout << "Id of employee: " << id << endl;
  }
};

void Employee :: setData(string emp_name, int emp_id){ // using it on declaring function outside of a class
  name = emp_name;
  id = emp_id;
}

int main(){
  int x = 20;
  Employee emp1;
  emp1.setData("Flynn", 102);
  emp1.printData();
  std::cout << "\nThe Value of local x: " << x << endl;
  std::cout << "The Value of global of x: " << ::x << endl; // using scope resolution operator

  return 0;
}

