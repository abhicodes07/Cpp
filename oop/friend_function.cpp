#include <iostream>
using namespace std;

class ComplexNum{
  private:
    int a;
    int b;
  public:
    // Friend function declaration
    friend ComplexNum sumComplex(ComplexNum o1, Complex O2);
    void setNumber(int n1, int n2){
    a = n1;
    b = n2;
  }
    void printNumber(){
      std::cout << "The number is" << a << "and" << b;
  }
};

complex sumComplex(Complex o1, Complex o2){
  Complex o3;
  o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}

int main(){
  Complex c1, c2, sum;
  c1.setNumber(1, 4);
  c1.printNumber();
  c2.setNumber(5, 8);
  c2.printNumber();

  sum.sumComplex(c1, c2);
  sum.printNumber();
  return 0;
}






