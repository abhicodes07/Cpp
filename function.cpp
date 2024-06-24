#include <iostream>
using namespace std;

int _even_(int num);

int _even_(int num){
  if (num % 2 == 0) {
    cout << "Number is even." << endl;
  }
  else {
    cout << "Number is odd." << endl;
  }
  return 0;
}

int main(){
  int num;
  cout << "Enter the number.";
  cin >> num;
  _even_(num);
  return 0;
}
