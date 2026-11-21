#include<bits/stdc++.h>
using namespace std;

template<typename T>
class square{
    public:
    T num;
    square(T x){
        num=x*x;
    }
    void show(){
        cout<<"Anwer: "<<num<<endl;
    }
};

int main(){

    square<int> number1(45);
    square<double> number2(5.5);
    number1.show();
    number2.show();
}