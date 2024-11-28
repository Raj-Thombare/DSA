#include <iostream>
using namespace std;
// xor operation removes duplicates => 
int findUnique(int num[], int n) {
  int uniqueNum = 0;
  for (int i = 0; i < n; i++) {
    uniqueNum = uniqueNum ^ num[i]; // 1 XOR 1 => 0
    // 0 = 0 ^ 2 => 00 ^ 10 => 10 = 2
    // 2 = 2 ^ 3 => 10 ^ 11 => 01 = 1
    // 1 = 1 ^ 1 => 01 ^ 01 => 00 = 0
    // 0 = 0 ^ 6 => 00 ^ 110 => 110 = 6
    // 6 = 6 ^ 3 => 110 ^ 011 => 101 = 5
    // 5 = 5 ^ 6 => 101 ^ 110 = 011 = 3
    // 3 = 3 ^ 2 => 011 ^ 10 = 01 = 1
  }
  return uniqueNum;
}

int main() {
  int n = 7;
  int num[7] = {2, 3, 1, 6, 3, 6, 2};
  int ans = findUnique(num, n);
  cout << ans;
}