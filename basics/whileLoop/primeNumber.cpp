#include <iostream>
using namespace std;

int main() {
  int n;
    cout << "Enter n: ";

  cin >> n;
  int i = 2;
  
  while(i < n){
    if(n%i == 0){
      cout << "not prime\n";
      return 0;
    }

    i = i + 1;
  }

  cout << "Prime";
}