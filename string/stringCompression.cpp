#include <iostream>
using namespace std;

int main() {
  string chars[16] = {"a", "a", "b", "b", "c", "c", "c", "c",
                      "c", "c", "c", "c", "c", "c", "c", "c"};
  // ["a","2","b","2","c","3"] --> 6

  int ansIndex = 0;
  int n = 16;
  int i = 0;

  while (i < n) {
    int j = i + 1;
    while (j < n && chars[i] == chars[j]) {
      j++;
    } // if while loop exits then either the array traversing finished
      // or new char occurred!

    // store old char
    chars[ansIndex++] = chars[i];

    // count --> j will be new char index
    int count = j - i;

    if (count > 1) {
      string cnt = to_string(count); // "12"
      for (char ch : cnt) {
        chars[ansIndex++] = ch;
        // chars[ansIndex] = 1;
        // ansIndex++
        // chars[ansIndex] = 2;
      }
    }
    i = j; // next char is at j
  }

  cout << "Answer is " << ansIndex;
}