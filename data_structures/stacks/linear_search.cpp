#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int arr[] = {10, 20, 30, 40, 50};
  int pos = 0;
  int i = 0;
  int val = 20;

  while (i < 5){
    if (arr[i] == val){
      pos = i;
      std::cout << "Value " << arr[pos] << " found at position " << pos << "." << endl;
      break;
    } else {
      i += 1;
    }
  }

  if (pos == 0){
    cout << "Value not found." << endl;
  }
  return 0;
}
