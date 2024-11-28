#include <iostream>
using namespace std;

void printArray(int num[], int n) {
  for (int i = 0; i < n; i++) {
    cout << num[i] << " ";
  }
}

int main() {

  // int num[6] = {2, 5, 3, 1, 6, 9}; // [5, 2, 1, 3, 9, 6]
  // int n = 6;

  int num[5] = {2, 5, 3, 1, 6}; // [5, 2, 1, 3, 6]
  int n = 5;

  for (int i = 0; i < n; i += 2) {

    if (i + 1 < n) {
      // swap(num[i], num[i+1]);
      int x = num[i];
      int y = num[i+1];
      int temp = x;
      num[i] = y;
      num[i+1] = temp;
    }
  }

  printArray(num, n);
}