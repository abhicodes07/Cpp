#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int POS = -1;
  int MID;
  int BEG = 0;
  int END = 10;
  int val = 40;

  while (BEG <= END){
    MID = BEG + (END - BEG)/2;

    if (arr[MID] == val){
      POS = MID;
      std::cout << "Value " << arr[POS] << " found at position " << POS << " ." << endl;
      break;
    } else if (arr[MID] > val){
      END = MID - 1;
    } else {
      BEG = MID + 1;
    }
  }

  if (POS == -1){
    std::cout << "Value not found." << endl;
  }

  return 0;
}





