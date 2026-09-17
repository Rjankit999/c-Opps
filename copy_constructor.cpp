#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;
    Student(int age, string name){
        cout<<"This defalt  cosntractor";
        this ->name=name;
        this ->age=age;
    }
    void show(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
    ~Student(){
        cout<<"This is distructor";
    }

};

int main(){

    Student s1(18,"Ankit");
    s1.show();
 

}