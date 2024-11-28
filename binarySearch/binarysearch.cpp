#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2; // int value should not overflow!

  // 2 raise to 31 - 1 + 2 raise to 31 - 1/2 ===> overflows when s and e is same
  // 2 raise to 31 - 1 + (end - start)/2

  while (start <= end) {
    if (key == arr[mid]) {
      return mid;
    }

    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  return -1;
}

int main() {
  int arr[5] = {2, 3, 7, 9, 14};

  int ans = binarySearch(arr, 5, 9);
  cout << "Answer is " << ans << endl;
}