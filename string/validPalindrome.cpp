#include <iostream>
using namespace std;

int lengthOfString(char str[]) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void reverseStr(char str[], int n) {
  int s = 0, e = n - 1;

  while (s < e) {
    swap(str[s++], str[e++]);
  }
}

char toLowerCase(char ch) {
  char temp;
  if (ch >= 'a' && ch <= 'z') {
    return ch;
  } else {
    temp = ch - 'A' + 'a';
  }
  return temp;
}

bool validPalindrome(char str[], int n) {
  int s = 0, e = n - 1;

  while (s < e) {
    if (toLowerCase(str[s]) != toLowerCase(str[e])) {
      return 0;
    } else {
      s++;
      e--;
    }
  }

  return 1;
}

int main() {
  char str[20];
  cout << "Enter  string: ";
  cin >> str;

  int n = lengthOfString(str);

  cout << "Is Valid Palindrome? " << validPalindrome(str, n);
}

