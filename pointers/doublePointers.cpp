#include <iostream>
using namespace std;

int main() {
  int i = 5;
  int *p = &i;
  int **p2 = &p;

  cout << " address of p " << p << endl;
  cout << " address of p2 " << p2 << endl;

  cout << " value of p " << *p << endl;
  cout << " value of p2 " << **p2 << endl;

  cout << " &i " << &i << endl;
  cout << " p " << p << endl;
  cout << " *p2 " << *p2 << endl;
  cout << " **p2 " << **p2 << endl;
}