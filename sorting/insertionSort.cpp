#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[7] = {10, 1, 7, 4, 8, 2, 11};
  int n = 7;

  for (int i = 1; i < n - 1; i++) {
    int temp = arr[i]; // 4

    // [1 7 10] 4 8 2 11
    // [1 7 4] 10 8 2 11
    // [1 4 7] 10 8 2 11
    int j = i - 1;
    for (; j >= 0; j--) {
      if (arr[j] > temp) {
        // 10 > 4
        // 7 > 4
        arr[j + 1] = arr[j]; // shift
                             //
      } else {
        break;
      }
    }
    arr[j + 1] = temp;
  }

  printArray(arr, n);
}