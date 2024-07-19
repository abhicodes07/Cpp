#include <iostream>
using namespace std;

inline void prime_num(int a){
  int flag = 0;
  if (a==0 or a==1) {
    flag = 1;
  }

  else {
    for (int i=2 ; i<a; i++) {
      if (a % i == 0){
          flag = 1;
          break;
      }
    }
  }

  if (flag == 0) {
    std::cout << "Prime" << endl;
  }
  else if (flag == 1) {
    std::cout << "Not Prime" << endl;
  }
}

int main(){
  int a = 3;
  cout << "Type of number 3: ";
  prime_num(a);
  return 0;
}


