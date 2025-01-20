#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> st = {10, 20, 30, 40};

    int x = 30; // Element to search
    int y = 50; // Another element to search

    // Searching for x
    if (st.find(x) != st.end()) {
        cout << x << " is found in the set." << endl;
    } else {
        cout << x << " is not found in the set." << endl;
    }
    
    // Searching for y
    if (st.find(y) != st.end()) {
        cout << y << " is found in the set." << endl;
    } else {
        cout << y << " is not found in the set." << endl;
    }

    return 0;
}
