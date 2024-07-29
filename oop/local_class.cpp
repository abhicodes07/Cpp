#include <iostream> 
using namespace std;

// This is a demonstration of local class 
int main(){
  class Students{
    public:
      Students(){
      std::cout << "This is a student constructor" << endl;
    }
  };

  Students s;
  return 0;
}

