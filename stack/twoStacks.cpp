#include<iostream>
using namespace std;

class TwoStacks {
    public:
        int *arr;
        int size;
        int top1, top2;

        //  stack1 = -1 [ | | | | | ] stack2 = size
        TwoStacks(int size){
            this -> size = size;
            arr = new int[size];
            top1 = -1;
            top2 = size;
        }

        void push1(int element){
            if(top1 < top2 - 1){
                top1++;
                arr[top1] = element;
            }else{
                cout << "stack overflow";
                exit(1);
            }
        }

        void push2(int element){
            if(top1 < top2 - 1){
                top2--;
                arr[top2] = element;
            }else{
                cout << "stack overflow";
                exit(1);
            }
        }

        int pop1(){
            if(top1 >= 0){
                int element = arr[top1];
                top1--;
                return element;
            }else{
                cout << "stack underflow";
                exit(1);
            }
        }

        int pop2(){
            if(top2 < size){
                int element = arr[top2];
                top2++;
                return element;
            }else{
                cout << "stack underflow";
                exit(1);
            }
        }
};

int main(){
    TwoStacks ts(6);
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7);  
    cout << "Popped element from stack1 is " << ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is " << ts.pop2(); 
}