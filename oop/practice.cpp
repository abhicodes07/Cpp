#include <iostream>
using namespace std;

class Employee{
  public:
    string first;
    string last;
    string email;
    
    void setData(string first_name, string last_name); // Class Method
    void getData(); // Class Method
};

void Employee :: setData(string first_name, string last_name){
  first = first_name;
  last = last_name;
  email = first_name+"."+last_name+"@gmail.com";
}

void Employee :: getData(){
  std::cout << first << endl;
  std::cout << last << endl;
  std::cout << email << endl;
}

int main(){
  Employee emp1; // object 
  emp1.setData("flynn", "steph"); 
  emp1.getData();
  return 0;
}




