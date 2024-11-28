#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int sum;
  
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  cout << sum;

}