#include <iostream>
#include <string>
using namespace std;


void greet(string person1){
  std::cout << "Hello! " << person1 << endl;
}

void greet(string person1, string person2){
  std::cout << "Hello! " << person1 << " and " << person2 << endl;
}

void greet(string person1, string person2, string person3){
  std::cout << "Hello! " << person1 << ", " << person2 << " and " << person3 << endl;
}

int main (int argc, char *argv[]) {
  greet("Abhi");
  greet("Abhi", "Sam");
  greet("Abhi", "Sam", "Flynn");
  return 0;
}
