#include <iostream>
using namespace std;

// Pivot element is the only element in input array which is smaller than it's
// previous element. A pivot element divided a sorted rotated array into two
// monotonically increasing array.

// Sorted Rotated Array : 4 5 6 7 8 1 2 3
// 1 is the Pivot Element

int findPivot(int arr[], int n) {
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;

  while (s < e) {

    if (arr[s] <= arr[e])
      return arr[s]; // if array is already sorted and not rotated! it
                     // should give 1st index as min value
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }

    mid = s + (e - s) / 2;
  }
  return arr[s];
}
// pivot = minimum value
int main() {
  // int arr[5] = {1,2,3,7,9};// sorted array
  // int arr[6] = {7, 9, 10, 17, 2, 5}; // rotated array
  int arr[4] = {11, 13, 15, 17}; // for not rotated array

  cout << "Pivot is " << findPivot(arr, 4) << endl;
}