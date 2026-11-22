#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 6;

    try
    {
        if (b == 0)
        {
            throw b;
        }

        cout << "Result: " << a / b;
    }
    catch (int x)
    {
        cout << "Error: Division by zero!";
    }

    cout << "\nProgram continues...";

    return 0;
}