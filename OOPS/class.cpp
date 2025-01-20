#include<iostream>
using namespace std;

class Hero {

    private:
    int health;

    public:
    char level;

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    char getLevel(){
        return level;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    //static
    Hero ramesh;
    ramesh.setHealth(75);
    ramesh.setLevel('C');
    cout << "Health: " << ramesh.getHealth() << endl;
    cout << "Level: " << ramesh.getLevel() << endl;

    //dynamic
    Hero *raj = new Hero;

    raj->setHealth(100);
    raj->setLevel('A');
    cout << "Health: " << raj -> getHealth() << endl;
    cout << "Level: " << raj -> getLevel() << endl;

    return 0;
}