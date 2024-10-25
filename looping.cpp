#include <iostream>
using namespace std;

// meng-print angka sebanyak input yang ditentukan user.
// input: 5
// output: 1 2 3 4 5 
// for (initiation; condition; increment) {
// }

int main() {
  int num;
  
  cout << "Input number: ";
  cin >> num;

  for (int i=1; i <= num; i++) {
    cout << i << " ";
  }
  
  return 0;
}

// TIF --> I nya individualis