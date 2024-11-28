#include <iostream>
#include <limits.h>
using namespace std;

void printRowSum(int arr[][4], int row, int col) {
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum += arr[i][j];
    }
    cout << sum << " ";
  }
  cout << endl;
}

void printColSum(int arr[][4], int row, int col) {
  for (int i = 0; i < col; i++) {
    int sum = 0;
    for (int j = 0; j < row; j++) {
      sum += arr[i][j];
    }
    cout << sum << " ";
  }
}

void largestRowSum(int arr[][4], int row, int col) {
  int maxi = INT_MIN;
  int rowIndex = -1;
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum += arr[i][j];
      rowIndex = i;
    }
    if (sum > maxi) {
      maxi = sum;
    }
  }
  cout << "Maximum sum is " << maxi << endl;
  cout << "Maximum sum at row " << rowIndex << endl;
}

int main() {

  int arr[3][4];

  cout << "Enter array elements: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  printRowSum(arr, 3, 4);
  printColSum(arr, 3, 4);
  largestRowSum(arr, 3, 4);
}