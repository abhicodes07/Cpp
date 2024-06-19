#include <iostream>
#include <ostream>
template <int i>
void a() {
  a<i + 1>();
}

void foo() {
  a<0>();
}

int main(){
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
