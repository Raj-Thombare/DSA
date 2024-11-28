#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter n: ";
  cin >> n;
  int ans = 0;
  while (n != 0) {
    int digit = n % 10; // get last digit
    cout << "digit" << digit <<endl;
    ans = (ans * 10) + digit;
    n = n / 10; // divide n and remove last digit
  }

  cout << ans << endl;
}
