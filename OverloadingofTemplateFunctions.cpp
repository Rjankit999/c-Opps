#include <bits/stdc++.h>
using namespace std;
template <typename T>
void show(T x)
{
    cout << "This is one parameter: " << x<<endl;
}
template <typename T1, typename T2>
void show(T1 a, T2 b)
{
    cout << "This is second parameter: " << a + b;
}
int main(){

show<int>(5);
show<int, int>(4, 5);

}