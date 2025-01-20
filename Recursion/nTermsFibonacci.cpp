#include<iostream>
using namespace std;

int fibonacci(int n){
    
    //base case for f(0) = 0, f(1) = 1
    if(n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}