#include <iostream>
using namespace std;

void update(int **p2) {
  // p2 = p2 + 1; // no
  // *p2 = *p2 + 1; // yes- increments address

  **p2 = **p2 + 1; // 6
}

int main() {
  int i = 5;
  int *p = &i;
  int **p2 = &p;

  cout << " before i " << i << endl;
  cout << " before p " << p << endl;
  cout << " before p2 " << p2 << endl;
  update(p2);
  cout << " after i " << i << endl;
  cout << " after p " << p << endl;
  cout << " after p2 " << p2 << endl;
}