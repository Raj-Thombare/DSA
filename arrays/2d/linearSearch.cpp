#include <iostream>
using namespace std;
// need to specity col size otherwise it won't understand dimension +
// how to keep elements and col size is compulsary

bool isPresent(int arr[][4], int target, int row, int col) {

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == target) {
        return 1;
      }
    }
    cout << endl;
  }

  return 0;
}

int main() {

  int arr[3][4];

  cout << "Enter array elements: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
    cout << endl;
  }

  int target;
  cout << "Enter Target: " << endl;
  cin >> target;

  if (isPresent(arr, target, 3, 4)) {
    cout << "Present";
  } else {
    cout << "Not Present";
  }
}