#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &stack, int element){
    if(stack.empty()){
        stack.push(element);
        return ;
    }

    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, element);
    stack.push(num);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return ;
    }

    int x = stack.top();
    stack.pop();

    reverseStack(stack);
    
    insertAtBottom(stack, x);
}

int main() {
    stack<int> st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
