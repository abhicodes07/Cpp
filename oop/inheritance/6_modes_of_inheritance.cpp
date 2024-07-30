#include <iostream>
using namespace std;

class A{
public:
  int x;
protected:
  int y;
private:
  int z;
};

class B:public A{
  // x is public
  // y is protected
  // z is not accessible
};

class C:protected A{
  // x is protected
  // y is protected
  // z is not accessible
};

class D:private A{
  // x is private
  // y is private
  // z is private
};
