#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  int isPrime = 1;
  
  for (int i = 2; i < n; i++) {
      if(n % i == 0){
        isPrime = 0;
        break;
      }
  }

  if(isPrime){
      cout << "Prime";
    }else{
      cout << "Not Prime";
    }
}