#include <iostream>
#include <string>
using namespace std;
class teacher
{
    public:
    string name;
    string depat;
    string subj;
    double salary;
};

int main()
{
    teacher t1;
    t1.name="ANkit";
    t1.salary=45564;
    cout<<t1.name;
}