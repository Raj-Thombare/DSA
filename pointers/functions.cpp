#include <iostream>
using namespace std;

void print(int *p) { cout << *p << endl; }

void update(int *p) { *p = *p + 1; }

int getSum(int arr[], int n) { //*arr
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int value = 10;
  int *p = &value;
  // cout << "before update -->" << *p << endl;
  // print(p);
  // update(p);
  // cout << "after update -->" << *p << endl;

  int arr[6] = {1, 2, 3, 4, 5, 8};
  cout << "Sum is " << getSum(arr, 6) << endl;
  cout << "Sum of last 3 is " << getSum(arr + 3, 3) << endl;
}