#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int s, int e) {

  if (s > e)
    return true;

  if (str[s] != str[e]) {
    return false;
  } else {
    return checkPalindrome(str, s + 1, e - 1);
  }
}

int main() {
  string str = "racecar";
  bool result = checkPalindrome(str, 0, str.length() - 1);
  cout << result;
}