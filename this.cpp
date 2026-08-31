#include<iostream>
#include<string>
using namespace std;
    class student{
        public:
        string name;
        int age;

        student(string name, int age){
            this->name=name;
            this->age=age;
        }
        void gitinfo(){
            cout<<name;
            cout<<age;
        }
    };

int main(){
    student s1("Ankit Maurya",18);
    // s1.gitinfo();

    student s2(s1);
    s2.gitinfo();
}