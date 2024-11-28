#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;

    string str = "babbar";

    for (int i = 0; i < str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << ans << endl;;
    // cout << char(s.top());
    return 0;
}
