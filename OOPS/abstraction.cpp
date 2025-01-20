#include<iostream>
using namespace std;

class Abstraction {
    private:
        int a, b;

    public:
    void set(int x, int y){
        this->a = x;
        this->b = y;
    }

    void display(){
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }
};

int main(){
    Abstraction obj;
    obj.set(99, 89);
    obj.display();
    return 0;
}