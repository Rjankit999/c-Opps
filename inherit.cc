#include<iostream>
using namespace std;
class student{
    public:
    int age;
    string name;
    
};

class teacher : public student{
    public:
    int roll;

    teacher(int roll ,int age){
        this -> roll=roll;
        this  ->age=age;

    }


    void gitinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll: "<<roll<<endl;
    }
};

int main(){
  
}