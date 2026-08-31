#include<iostream>
#include<string>
using namespace std;
class teacher{

    public:

        teacher(string n, int a, int s){
            cout<<"This is contructer"<<endl;
            name=n;
            age=a;
            selary=s;
        }


        string name;
        int age;
        int selary;
        void getinfo(){
            cout<<"name"<<name<<endl;
        }


};
int main(){
    teacher t1("Ankit",20,50000);
    t1.getinfo();
}