#include<iostream>
#include<string>
using namespace std;
class teacher{

    public:
    
        string name;
        int age;
        int selary;
        


};
int main(){
    teacher t1;
    t1.age=18;
    t1.name="Ankit Maurya";
    t1.selary=50000;
    cout<<t1.name;
}