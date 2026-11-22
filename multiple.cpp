#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter choice (1, 2, 3): ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;

        else if (choice == 2)
            throw 5.5f;

        else if (choice == 3)
            throw 'A';

        else
            throw "Invalid choice";
    }

    catch (int e)
    {
        cout << "Integer Exception: " << e;
    }

    catch (float e)
    {
        cout << "Float Exception: " << e;
    }

    catch (char e)
    {
        cout << "Character Exception: " << e;
    }

    catch (const char* e)
    {
        cout << "String Exception: " << e;
    }

    return 0;
}