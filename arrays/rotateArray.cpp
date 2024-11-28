#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> nums) {
  for (int i : nums) {
    cout << i << " ";
  }
}

int main() {

  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  int n = 7;

  vector<int> temp(n);

  for (int i = 0; i < n; i++) {
    temp[(i + k) % n] = nums[i];
  }

  nums = temp;

  printArray(temp);
}
// Output: [5,6,7,1,2,3,4]