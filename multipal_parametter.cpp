#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2, typename T3, typename T4>
class student
{
public:
    T1 r;
    T2 n;
    T3 m;
    T4 count;
    student(T1 roll, T2 name, T3 marks,T4 c)
    {
        r = roll;
        n = name;
        m = marks;
        count=c;
    }

    void show()
    {
        cout << "Student: " << count << endl;
        cout << "Roll: " << r << endl;
        cout << "Name: " << n << endl;
        cout << "Marks: " << m << endl;
       cout<<endl<<endl;
    }
};

int main()
{
    student<int, string, int,int> s1(1, "Ankit", 500,1);
    student<int, string, int, int> s2(2, "Aman", 700,2);
    s1.show();
    s2.show();
}