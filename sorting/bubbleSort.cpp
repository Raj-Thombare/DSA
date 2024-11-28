#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[5] = {6, 0, 8, 4, 0};
  int n = sizeof(arr)/sizeof(arr[0]);
  // Bubble Sort
  // it searches for the Largest element and places it in its position. so
  // last element will be position correct for length n. then run loop for
  // n - i, here i will be same as length n.
  for (int i = 1; i < n; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swapped = true;
        swap(arr[j], arr[j + 1]);
      }
    }

    if (swapped == false) {
      break; // if one 1st iteration, no element is swapped! then it is //
             // sorted array
    }
  }

  printArray(arr, n);
}