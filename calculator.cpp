#include <bits/stdc++.h>
using namespace std;
template<typename T>

class calcluter{
    public:
    T num1;
    T num2;
    calcluter( T x   ,T y){
        num1=x;
        num2=y;
    }
    void add(){
            cout<<"Adition: "<<num1+num2<<endl;
    }
    void subtract(){
            cout<<"Subtract: "<<num1-num2<<endl;
    }
    void multiply(){
            cout<<"Multiply: "<<num1*num2<<endl;
    }
    void divide(){
            cout<<"Divide: "<<num1/num2<<endl;
    }
};
int main(){
    calcluter <int> a(20,4);
    a.add();
    a.subtract();
    a.multiply();
    a.divide();
}