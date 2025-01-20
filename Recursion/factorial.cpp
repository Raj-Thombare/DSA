#include<iostream>
using namespace std;

int factorial(int n){
    
    
    if(n == 0)
        return 1;

    // 5 = 5 * (4)
    return n * factorial(n-1);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = factorial(n);
    cout << ans;
    return 0;
}