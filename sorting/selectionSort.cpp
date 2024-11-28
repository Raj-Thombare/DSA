#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int arr[5] = {64, 25, 64, 22, 11};
  int n = 5;

  for (int i = 0; i < n; i++) {
    int minIndex = i; // 0,1,2,3

    for (int j = i + 1; j < n; j++) {
      // 25 < 64
      // 64 < 12
      // 64 < 22
      // 64 < 11
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
        // minIndex = 1;2;3
      }
    }
    swap(arr[minIndex], arr[i]); // 25 <=> 64, 64 <=> 12,
                                 //  64 <=> 22, 64 <=> 11
  }

  printArray(arr, n);
}