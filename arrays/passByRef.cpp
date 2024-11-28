#include <iostream>
using namespace std;

void updateArray(int num[], int n) {
  num[2] = 10;
  for (int i = 0; i < 3; i++) {
    cout << num[i] << " ";
  }
  cout << endl;
}

int main() {

  int num[3] = {1, 2, 3};

  updateArray(num, 3);

  for (int i = 0; i < 3; i++) {
    cout << num[i] << " ";
  }
}