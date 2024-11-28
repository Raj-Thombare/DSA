#include <iostream>
using namespace std;

char maxOccurCharacter(string str) {
  int arr[26] = {0};

  // create array of character count
  for (int i = 0; i < str.size(); i++) {
    char ch = str[i];
    int alphaNum = 0; // gives ascii value of alphabet
    alphaNum = ch - 'a';
    arr[alphaNum]++; // increment alpha count
  }

  // find maximum occurance
  int maxi = -1;
  int ans = 0;
  for (int j = 0; j < 26; j++) {
    if (arr[j] > maxi) {
      ans = j; // index of max occur char
      maxi = arr[j];
    }
  }

  return ans + 'a';
}

int main() {
  string str;
  cout << "Enter String: ";
  cin >> str;
  cout << maxOccurCharacter(str);
}