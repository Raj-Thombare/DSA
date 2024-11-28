#include <iostream>
using namespace std;

int main() {
  int num = 5;
  int *ptr = &num; // * - dereference operator, & - address of operator
  double num2 = 2.5;
  double *ptr2 = &num2;
  cout << *ptr << " " << &num << endl;
  cout << (*ptr) + 1 << endl;

  cout << "size of num2 " << sizeof(num2) << endl;
  cout << "size of *ptr2 " << sizeof(*ptr2) << endl;
  cout << "size of *ptr " << sizeof(*ptr) << endl;

  // never initialize a pointer like int &ptr, cause it will point to some
  // garbage address. so always do int *ptr = 0; ptr = &temp;

  // copying a pointer

  int a = 100;
  int *p = &a;
  int *q = p;

  cout << p << " & " << q << endl;
  cout << *p << " & " << *q << endl;

  // pointer arithmetics
  int t = 1;
  int *ptr3 = &t;

  cout << (*ptr3) + 1 << endl;
  cout << ptr3 << " !== " << (ptr3) + 1
       << endl; // if current pointer address is 100, then doing +1 will move it
                // to its next address which will be 104 in the case of int
                // cause it stores 4 bytes of address, in case of double or
                // char, it will be 108 i.e., 8 bytes
}