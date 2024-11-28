#include <iostream>
#include <vector>
using namespace std;
// 1) TC:-O(NLOGN),SC:-O(1) - Binary Search
int search(int target, int nums[], int start, int end) {
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (nums[mid] == target) {
      return mid;
    }

    if (nums[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {
  int n = 3;
  int numbers[4] = {2, 7, 11, 15};
  int target = 9;

  for (int i = 0; i < n; i++) {
    int j = search(target - numbers[i], numbers, i + 1, n - 1);

    if (j != (-1)) {
      cout << i + 1 << " " << j + 1;
    }
  }

  // 2 Pointers Approach - //TC:-O(N),SC:-O(1)
  // int left = 0, right = numbers.size() - 1;
  // while (left <= right) {
  //   if ((numbers[left] + numbers[right]) > target) {
  //     right--;
  //   } else if ((numbers[left] + numbers[right]) < target) {
  //     left++;
  //   } else {
  //     return {left + 1, right + 1};
  //   }
  // }
  // return {-1, -1};
}
