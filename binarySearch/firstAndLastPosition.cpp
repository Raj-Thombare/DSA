#include <iostream>
using namespace std;

int firstPositionBS(int arr[], int n, int key) {
  int start = 0, end = n;
  int mid = (start + end)/2;
  int ans = -1;

  while (start <= end) {
    if (key == arr[mid]) {
      ans = mid;
      end = mid - 1;
    }else if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    
    mid = (start + end)/2;
  }

  return ans;
}

int lastPositionBS(int arr[], int n, int key) {
  int start = 0, end = n - 1;
  
  int mid = (start + end)/2; 
  int ans = -1;

  while (start <= end) {
    cout << "Mid is " << mid << endl;
    if (key == arr[mid]) {
      ans = mid;
      start = mid + 1;
    }else if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = (start + end)/2;
  }

  return ans;
}

int main() {
  // int arr[6] = {5,7,7,8,8,10};
  int arr[2] = {2, 2};
  
  
  int firstIndex = firstPositionBS(arr, 2, 2);
  int lastIndex = lastPositionBS(arr, 2, 2);

  cout << "First position is " << firstIndex << " ";
  cout << "& Last position is " << lastIndex << endl;

}