#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {  
            if (num % i == 0) { 
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "Prime number" << endl;
    } else {
        cout << "Not prime" << endl;
    }

    return 0;
}
