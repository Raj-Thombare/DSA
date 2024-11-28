#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& inputStack, int size, int element) {

    if(inputStack.empty()) {
        inputStack.push(element);
        return;
    }

    int x = inputStack.top();
    inputStack.pop();

    solve(inputStack, size, element);
    inputStack.push(x);
}

void insertAtBottom(stack<int>& inputStack, int size, int element) {
    solve(inputStack, size, element);
}

int main() {
    stack<int> st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int size = st.size();
    int element = 100;

    insertAtBottom(st, size, element);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
