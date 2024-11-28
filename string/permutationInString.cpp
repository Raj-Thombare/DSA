#include <iostream>
using namespace std;

bool chequeEqual(int a[], int b[]) {
  for (int i = 0; i < 26; i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s1 = "ab", s2 = "eidbaooo";

  int count1[26] = {0};
  // s1 count
  for (int i = 0; i < s1.length(); i++) {
    int index = s1[i] - 'a';
    count1[index]++;
  }

  // traverse in s2 and get window of length s1
  int i = 0;
  int windowSize = s1.length();

  int count2[26] = {0};

  while (i < windowSize && i < s2.length()) {
    int index = s2[i] - 'a';
    count2[index]++;
    i++;
  }

  if (chequeEqual(count1, count2)) {
    cout << "Equal";
  }

  // move window next, make old char count --, and next char count ++

  while (i < s2.length()) {
    int newChar = s2[i];
    int index = newChar - 'a';
    count2[index]++;

    int oldChar = s2[i - windowSize];
    index = oldChar - 'a';
    count2[index]--;

    i++;

    if (chequeEqual(count1, count2)) {
      cout << "Equal";
    }
  }
}