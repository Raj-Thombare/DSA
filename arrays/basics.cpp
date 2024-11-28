#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  cout << "printing the array: " << endl;
  for(int i = 0;i < size; i++){
    cout << arr[i] << " ";
  }
  cout << "printing DONE" << endl;
}

int main() {
  // declare array
  int numbers[15];

  // accessing an array
  cout << "value at 14 index is " << numbers[14] << endl;

  // accessing an array index that doesn't exist!
  // cout << "value at 20 index is " << numbers[20] << endl;

  // initialising an array
  int second[3] = {5,7,11};
  printArray(second, 3);

  // accessing array element
  cout << "Value at index 2 is " << second[2] << endl;

  int third[15] = {2,5};
  printArray(third, 15);

  int thirdSize = sizeof(third)/sizeof(int);
  // 1 int is of 4 bits so, it will be 60. divide it by int i.e sizeof(int)
  cout << "Size of third is "<< thirdSize << endl;

  // initialize entire array with 0
  int fourth[10] = {0};
  printArray(fourth, 10);
  
  // cannot initialize in case of fifth, 1-9 will be garbage value
  int fifth[10] = {1};
  printArray(fifth, 10);

  int fifthSize = sizeof(fifth)/sizeof(int);
  cout << "Size of fifth is "<< fifthSize << endl;
  // size will be 10, despite having only 1 element; because other's contain
  // garbage values
  
}