#include<iostream>
using namespace std;

class Stack {
    public:
        int *arr;
        int size;
        int top;

        Stack(int size) {
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element) {
            if(top < size - 1) {
                top++;
                arr[top] = element;
            } else {
                cout << "Stack overflow" << endl;
            }
        }

        void pop() {
            if(top >= 0) {
                top--;
            } else {
                cout << "Stack underflow" << endl;
            }
        }

        int peek() {
            if(top >= 0) {
                return arr[top];
            } else {
                cout << "Stack is empty" << endl;
                return -1;
            }
        }

        bool isEmpty() {
            return top == -1;
        }
};

int main() {
    Stack st(5);
    cout << st.isEmpty() << endl; 

    st.push(2);
    st.push(33);
    st.push(45);
    cout << st.peek() << endl; 

    st.pop();
    cout << st.peek() << endl; 
    cout << st.isEmpty() << endl; 

    return 0;
}
