#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
    double salari;
public:
    teacher(){
        cout<<"This is contstruction";
        dept="Computer science";
    }
    string name;
    int age;
    string dept;
    
    void changedept(string newdept)
    {
        dept = newdept;
    }
    void show(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<dept<<endl;
    }
    int setsalari(int s){
        salari=s;
    }
    int gitsalari(){
        cout<<salari;
    }
};

int main()
{
    teacher t1;
    t1.name = "Ankit";
    t1.age=20;
   
    t1.show();
   
    t1.show();
    t1.setsalari(2000);
    t1.gitsalari();

}