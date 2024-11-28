#include <iostream>
using namespace std;

long long int sqrtInteger(int x) {
  int s = 0, e = x;
  long long int mid = s + (e - s) / 2;
  long long ans = -1;

  while (s <= e) {
    long long square = mid * mid;

    if (square == x) {
      return mid;
    }

    if (square < x) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }

  return ans;
}

double morePrecision(int num, int precision, int x) {
  double ans = num;
  double factor = 1;

  for (int i = 0; i < precision; i++) {
    factor = factor / 10;

    for (double j = ans; j * j < x; j = j + factor) {
      ans = j;
    }
  }

  return ans;
}

int main() {
  int x = 37;
  int num = sqrtInteger(x);

  cout << "Answer is " << morePrecision(num, 3, x) << endl;
}