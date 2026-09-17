#include<iostream>
#include<string>
using namespace std;

class Pursion{
    public:
    int age;
    string name;
};

class Student : public Pursion{
    public:
    int roll_no;

};

class Gradstudent : public Student{
    public:
    string reserch;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll_no: "<<roll_no<<endl;
        cout<<"reserch: "<<reserch<<endl;
    }
};

int main(){
    Gradstudent g;
    g.name="Ankit Maurya";
    g.age=18;
    g.reserch="Contum Phycies";
    g.roll_no=9;

    g.display();
}
