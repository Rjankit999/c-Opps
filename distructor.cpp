#include <iostream>
using namespace std;
class Student
{   public:

    ~Student()
    {
        cout << "This is call is disttructor\n";
    }

    Student()
    {
        cout << "This is call Constructor\n";
    }
    void sum()
    {
        cout << 3 + 3;
    }
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }
  
};

int main()
{
    Student s;
}