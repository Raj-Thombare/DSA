#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &stack, int num){
    if(stack.empty() || (!stack.empty() && stack.top() < num )){
        stack.push(num);
        return;
    }

    int x = stack.top();
    stack.pop();

    insertSorted(stack, num);
    stack.push(x);
}

void sortStack(stack<int> &stack){
	//base case
	if(stack.empty()){
		return ;
	}
 
	int element = stack.top();
	stack.pop();

	sortStack(stack);
	
	insertSorted(stack, element);
}

int main() {
    stack<int> st;
    
    st.push(-2);
    st.push(0);
    st.push(-9);
    st.push(1);
    st.push(4);

    sortStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}