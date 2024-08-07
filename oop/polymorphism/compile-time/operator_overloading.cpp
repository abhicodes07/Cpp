/*#include <__iterator/bounded_iter.h>*/
#include <iostream>
using namespace std;

class Fraction{
private:
  int num, den;
public:
  Fraction(int n, int d){
    num = n;
    den = d;
  }

  operator float() const{
    return float(num)/float(den);
  }
};

int main (int argc, char *argv[]) {
  Fraction f(10, 5);
  float val = f;
  std::cout << val << endl;
  return 0;
}





