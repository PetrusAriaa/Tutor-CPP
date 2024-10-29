#include <iostream>
using namespace std;

// no return no parameters
void SayHello() {
  cout << "Hello!" << endl;
}

// with return no parameters
int BikinAngka() {
  int result;
  result = 0.2 + 0.3;
  return result;
}

// no return with parameters
void Greet(string name, string time) {
  cout << "Hello, " << name << ". " << time << endl;
} 

// with return with parameters
float Average(float x, float y) {
  float avg = (x + y) / 2;
  return avg;
}

int main() {
  cout << "Memanggil function no return no parameters" << endl;
  SayHello(); // Pemanggilan function
  cout << "===\n" << endl;

  cout << "Memanggil function with return no parameters" << endl;
  int result = BikinAngka(); // Pemanggilan function
  cout << "avg result: " << result << endl;
  cout << "===\n" << endl;

  cout << "Memanggil function no return with parameters" << endl;
  Greet("Abe", "Good Morning"); // Pemanggilan function
  string nama, salam;
  nama = "John Doe";
  salam = "Selamat siang";
  Greet(nama, salam); // Pemanggilan function
  cout << "===\n" << endl;

  cout << "Memanggil function with return with parameters" << endl;
  float avg_result = Average(3.4, 7.9); // Pemanggilan function
  cout << "avg result: " << avg_result << endl;
  cout << "===\n" << endl;

  return 0;
}