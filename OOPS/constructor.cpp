#include<iostream>
using namespace std;

class Hero {

    public:
    int health;
    char level;
    static int timeToComplete;

    static void random(){
        cout << "timeToComplete: " << timeToComplete << endl;
    }
    //default contructor
    Hero(){
        cout << "contructor called" << endl; 
    }
    
    //parameterized constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    //copy constructor
    Hero(Hero& temp){
        cout << "Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "health: " << this->health << endl;
        cout <<"level: " << this->level << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    ~Hero(){
        cout << "destructor called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    Hero raj(95, 'Z');

    raj.print();

    cout << "Time to complete: " << Hero::timeToComplete << endl;
    Hero::random();
    //copy contructor
    // Hero rakaa(raj);
    // rakaa.print();
    return 0;
}