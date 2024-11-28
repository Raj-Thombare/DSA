#include <iostream> 
using namespace std; 
  
#define SQUARE(x) (x * x) 
  
int main() 
{ 
    int n = 7; 
    int result = SQUARE(n); 
    cout << "Square of " << n << " is " << result; 
    return 0; 
}