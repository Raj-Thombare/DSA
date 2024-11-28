#include <iostream>
#include <math.h>
using namespace std;

int getMax(int num[], int n) {
//   const int INT_MIN = -2147483648;
  int max = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (num[i] > max) {
      max = num[i];
    }

    // there are inbuild max and min functions as well!
    // int maxi = max(maxi, num[i]);
  }
  return max;
}

int getMin(int num[], int n) {
//   const int INT_MAX = 2147483647;
  int min = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (num[i] < min) {
      min = num[i];
    }
  }
  return min;
}

int main() {

  int size;
  cout << "Enter size: ";
  cin >> size;

  int num[100];

  for (int i = 0; i < size; i++) {
    cin >> num[i];
  }

  int maxNum = getMax(num, size);
  cout << "Maximum number is " << maxNum << endl;

  int minNum = getMin(num, size);
  cout << "Minimum number is " << minNum << endl;
}