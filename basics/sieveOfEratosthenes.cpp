#include <iostream>
#include <vector>
using namespace std;
// Time Complexity = O(nlog(logn))

int main() {
  int n = 1000;
  int cnt = 0;
  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;

  for (int i = 0; i < n; i++) {
    if (prime[i]) {
      cnt++;

      for (int j = 2 * i; j < n; j = j + i) {
        prime[j] = 0;
      }
    }
  }

  cout << cnt;
}