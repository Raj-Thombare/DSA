#include <iostream>
using namespace std;

int main() {
  // initializing 2D array
  //                0,1   1,1   2,1   3,1   4,1
  int arr[5][5] = {{1,2},{3,2},{2,4},{5,6},{3,5}};

  for (int i = 0; i < 5; i++){
    for (int j = 1; j < 5; j++){
    cout << "(" << i << "," << j << ")" << endl;
    cout << arr[i][j] << " " << endl;
    } 
  }

  // int arr[3][3];
  // taking input --> row wise
  // cout << "Enter elements rowise: ";
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cin >> arr[i][j];
  //   }
  //   cout << endl;
  // }
  
  // taking input --> col wise
  // cout << "Enter elements columnwise: ";
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cin >> arr[j][i];
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
}