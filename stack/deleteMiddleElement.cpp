#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& inputStack, int count, int size) {
    // Base case
    if(count == size / 2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count + 1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> st;
    
    // Example stack initialization
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int size = st.size();

    deleteMiddle(st, size);

    // Print stack after deleting the middle element
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
