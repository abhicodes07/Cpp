#include <iostream>

using namespace std;

class Person{ 
  string name;
  int age;
  string address;
  string university;

public:
  // Defalut constructor 
  Person(string, int, string, string);

  // method to print details of a Person
  void details(){
    std::cout << "Hii! My name is " << name << " and I am " << age << " old. I am a student at " << university << " university. I live in " << address << "." << endl;
  }
};

Person::Person(string n, int a, string ad, string u){
  name = n;
  age = a;
  address = ad;
  university = u;
}


int main(){
  Person p("Abhinav", 19, "Kuchaman city", "MDSU");
  p.details();
  return 0;
}
