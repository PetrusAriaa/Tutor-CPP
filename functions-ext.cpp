#include <iostream>
using namespace std;

// return_data_type function_name (params_data_type params) {
// 
// }

void sayHello(string name, string greeting) {
  cout << "Hello, " << name << ". " << greeting << endl;
}

int main() {
  string namaSaya, salam;

  namaSaya = "Mas Fuad";
  salam = "Selamat Pagi";

  sayHello(namaSaya, salam);
  return 0;
}