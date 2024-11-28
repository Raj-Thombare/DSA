#include <iostream>
using namespace std;

void printArray(int ans[], int x) {
  cout << "Printing Array: " << endl;
  for (int i = 0; i < x; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}

void merge(int n, int arr1[], int m, int arr2[], int arr3[]) {

  int i = 0, j = 0;
  int k = 0;
  // 0 < 5 && 0 < 3
  while (i < n && j < m) {
    // 1 < 2 true
    // 3 < 2 false
    // 3 < 4 true
    // 5 < 4 false
    // 5 < 6 true
    // 7 < 6 false
    if (arr1[i] < arr2[j]) {
      arr3[k++] = arr1[i++];
      // arr3[0] = {1}; i = 0
      // arr3[2] = {1, 2, 3}; i = 1
      // arr3[4] = {1, 2, 3, 4, 5}; i = 2
    } else {
      arr3[k++] = arr2[j++];
      // arr3[1] = {1, 2}; j = 0
      // arr3[3] = {1, 2, 3, 4}; j = 1
      // arr3[5] = {1, 2, 3, 4, 5, 6}; j = 2
    }
  }

  // 3 < 5 true
  // 4 < 5 true
  // 5 < 5 false
  while (i < n) {
    arr3[k++] = arr1[i++];
    // arr3[6] = {1, 2, 3, 4, 5, 6, 7}
    // arr3[7] = {1, 2, 3, 4, 5, 6, 7, 9}
  }
  // 3 < 3
  while (j < m) {
    arr3[k++] = arr2[j++];
  }
}

int main() {
  int nums1[5] = {1, 3, 5, 7, 9};
  int nums2[3] = {2, 4, 6};
  int nums3[8] = {0};
  int n = 5, m = 3;

  merge(n, nums1, m, nums2, nums3);

  printArray(nums3, 8);

  return 0;
}

// 2nd approach would be to add 2nd array's element in 1st array and sort them!
// if space complexity is O(1)