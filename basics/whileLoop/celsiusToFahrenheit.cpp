#include <iostream>
using namespace std;

int main() {

  float celsius;
  cout << "enter celsius: ";
  cin >> celsius;
  cout << endl;

  float fahrenheit;

  fahrenheit = (celsius * 1.8) + 32;
  cout << fahrenheit;

  // to convert c to f => multiply by 1.8 or 9/5 and add 32
  // to convert f to c => multiply by .5556 or 5/9 and subtract 32

  // float fahrenheit;
  // cout << "enter fahrenheit: ";
  // cin >> fahrenheit;
  // cout << endl;

  // float celsius;

  // celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
  // cout << celsius;
}