#include <iostream>
using namespace std;

int main () {
  int nums[3] = {10, 13, 28};
  int currHighest = nums[0];

  for (int i = 1; i < 3; i++) {
    int currValue = nums[i];
    if (currValue > currHighest) {
      currHighest = currValue;
    }
  }

  cout << "highest number is " << currHighest << endl;

  return 0;
}