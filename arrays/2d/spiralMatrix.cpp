#include <iostream>
#include <vector>
using namespace std;

void printAns(vector<int> arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  vector<int> ans;
  int row = 3; // matrix.size();
  int col = 3; // matrix[0].size();

  int count = 0;
  int total = row * col;

  int startingRow = 0;
  int startingCol = 0;
  int endingRow = row - 1;
  int endingCol = col - 1;

  while (count < total) {
    // print starting row
    for (int index = startingCol; count < total && index <= endingCol;
         index++) {
      ans.push_back(matrix[startingRow][index]);
      count++;
    }
    startingRow++;

    // print ending col
    for (int index = startingRow; count < total && index <= endingRow;
         index++) {
      ans.push_back(matrix[index][endingCol]);
      count++;
    }
    endingCol--;

    // print ending row
    for (int index = endingCol; count < total && index >= startingCol;
         index--) {
      ans.push_back(matrix[endingRow][index]);
      count++;
    }
    endingRow--;

    // print starting col
    for (int index = endingRow; count < total && index >= startingRow;
         index--) {
      ans.push_back(matrix[index][startingCol]);
      count++;
    }
    startingCol++;
  }

  printAns(ans, 9);
}