#include <iostream>
using namespace std;

bool search(int arr[], int n, int key){
  // complexity --> O(n)
  for(int i=0;i<n;i++){
    if(arr[i] == key){
      return 1;
    }
  }
  return 0;
}

int main() {
  int num[10] = {-1, 2, 6, 8, 0, 4, 22, 15, 7, 4};

  bool isFound = search(num, 10, 0);

  if(isFound){
    cout<<"Key is present";
  }else{
    cout<<"Key is not present";
  }
}