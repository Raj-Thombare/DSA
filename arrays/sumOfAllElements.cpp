#include <iostream>
using namespace std;

int printSum(int num[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += num[i];
  }

  return sum;
}

int main() {
  
  int size;
  cout << "Enter Array Size: ";
  cin >> size;
  int num[100];

  for(int i=0;i<size;i++){
    cin >> num[i];
  }
  
  int sum = printSum(num, size);
  cout << "Sum is " <<sum;
}