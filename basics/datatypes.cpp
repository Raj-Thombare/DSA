#include <iostream>
using namespace std;

int main() {

  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;

  cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
  // it's range increase from -2(32)-1 to 2(32)-1 => 0 to 2(32)-1

  cout << "Size of signed int : " << sizeof(signed int) << endl;
  // no need to right signed as default int can be +ve or -ve!

  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;

  // typecasting
  int a = 'a';
  char b = 'b';
  cout << a << ' ' << b << endl; // 97 b

  return 0;
}