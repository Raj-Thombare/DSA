#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
  int start = 0;
  int end = n - 1;

  // swap first and last elements until start becomes > than end

  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int num[10] = {-1, 2, 6, 8, 0, 4, 22, 15, 7, 4};
  reverse(num, 10);
  printArray(num, 10);
}