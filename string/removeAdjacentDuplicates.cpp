#include <iostream>
using namespace std;

int main() {
  string name = "abbaca";
  string ans;
  for (int i = 0; i < name.length(); i++) {
    if (ans.size() && ans.back() == name[i]) {
      ans.pop_back();
    } else {
      ans.push_back(name[i]);
    }
  }

  cout << ans;
}