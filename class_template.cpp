#include <bits/stdc++.h>
using namespace std;

template <typename T>
class student
{
public:
    T num;
    student(T x)
    {
        num = x;
    }
    void display()
    {
        cout << "Value:" << num;
    }
};

int main()
{
    student<double> t1(8.55);
    t1.display();
}