#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int i = 2;
  int sum = 0;

  while(i <= n){
    cout << i << endl;
    sum = sum + i;
    i = i + 2;
  }

  // for(int i = 1; i <=n ; i++){
  //   if(i%2==0){
  //     cout << i << endl;
  //     sum = sum + i;
  //   }
  // }

  cout << "Sum of even numbers is " << sum;

}