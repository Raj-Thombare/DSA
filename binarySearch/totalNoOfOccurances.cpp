#include <iostream>
using namespace std;

int findOccurances(int nums[], int target, int n) {
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int count = 0;

  while (s <= e) {
    if (target == nums[mid]) {
      count = count + 1;
      s = mid + 1;
    } else if (target > nums[mid]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }

  return count;
}
// last occurance - first occurance + 1 = 5 - 3 + 1
int main() {
  int nums[10] = {2, 3, 4, 5, 5, 5, 7, 9, 10, 11};
  int ans = findOccurances(nums, 5, 10);
  cout << "Total no. of occurances: " << ans;
}