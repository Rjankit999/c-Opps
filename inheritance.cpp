#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
   

};

class student : public Person{
    public:
    int rollno;
    student(string name , int age, int rollno) : Person(name, age){
        this->rollno=rollno;
        
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ROll_No: "<<rollno<<endl;

    }
};

int main(){
    student s1("Ankit",18,9);
    s1.getinfo();
}