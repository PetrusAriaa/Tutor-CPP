// APALAH MEKBUK

#include <iostream>
using namespace std;

int main() {
  int usia;
  cout << "Input usia: ";
  cin >> usia;
  cout << endl;

  if (usia > 18) {
    cout << "Is adult" << endl;
  }
  else if (usia < 0) {
    cout << "Age invalid" << endl;
  }
  else {
    cout << "Is not adult" << endl;
  }
  
  return 0;
}
