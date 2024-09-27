#include <iostream>
using namespace std;

int main(void){
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int beg = 0;
  int mid;
  int pos = -1;
  int end = 10;
  int i;
  int val = 40;

  while (beg < end){
    mid = beg+(end-beg)/2;

    if (arr[mid] == val){
      pos = mid;
      cout << val << " found at position " << pos << endl;
      break;
    } 
    else if (arr[mid] > val){
      end = mid - 1;
    }
    else {
      beg = mid + 1;
    }
  }
  
  if (pos == -1){
    cout << "Not-Found!" << endl;
  }

  return 0;
}

