#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll;
};

class teacher
{
public:
    string subject;
};

class TA : public student, public teacher
{
public:
    int selari;
    void gitinfo(){
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<selari<<endl;
        cout<<subject<<endl;
    }
};

int main()
{
    TA t;
    t.name = "Ankit Maurya";
    t.roll=18;
    t.selari=25000;
    t.subject="Math";

    t.gitinfo();
}