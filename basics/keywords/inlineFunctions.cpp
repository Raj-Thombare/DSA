#include <iostream>
using namespace std;

inline int func(int &a, int &b) { return a > b ? a : b; }

int main() {
  int a = 3, b = 1;
  int result;

  result = func(a, b);
  cout << result << endl;

  b = b + 3;

  result = func(a, b);
  cout << result << endl;
}