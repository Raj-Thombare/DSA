#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        string gender;

    public:
    void createStudent(string name, int age, string gender){
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    void getStudent(){
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Age: " << this->gender << endl;
    }
};

int main(){
    Student student1;
    student1.createStudent("Raj", 22, "Male");
    student1.getStudent();
    return 0;
}