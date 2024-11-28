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
    swap(str[s++], str[e--]);
  }
}

int main() {
  char name[20];
  cout << "Enter  your name: ";
  cin >> name;
  cout << "Your name is " << name << endl;
  int n = lengthOfString(name);
  cout << "Length is " << n << endl;

  reverseStr(name, n);
  cout << name;
}