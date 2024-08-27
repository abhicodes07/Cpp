#include <iostream>
using namespace std;

void greet(){
  std::cout << "Hii!" << endl;
}

void greet(string name){
  std::cout << "Hii!, " << name << endl;
}

void greet(string first, string last){
  std::cout << "Hii!, " << first << " " << last << endl ;
}

int main (int argc, char *argv[]) {
  greet();
  greet("Sam");
  greet("Abhinav", "Asthana");
  return 0;
}
