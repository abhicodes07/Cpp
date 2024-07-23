#include <iostream>
using namespace std;

class Outer{
  public:
  
    // Nested classes
    class Inner{
      public:
        void display(){
          std::cout << "Hello from the inner class!" << endl; 
    }
  };

  // Mthod of outer class
  void display(){
    std::cout << "Hello from the outer class!" << endl;
  }
};

int main(){
  Outer out;
  out.display();
  Outer::Inner in;
  in.display();
  return 0;
}
