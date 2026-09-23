// Setter और getter का उपयोग करके Student class बनाओ।
#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;

    void gatter(){
        cout<<age<<endl;
        cout<<name<<endl;
    }

    void setter(int age, string name){
        this->age=age;
        this->name=name;
        gatter();
    }
};

int main(){

    Student s;
    s.name="Ankit";
    s.age=12;
    s.gatter();
    s.setter(18,"Aman");
    return 0;
}