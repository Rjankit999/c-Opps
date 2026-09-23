// Private variable को public getter से access करो।
#include<iostream>
using namespace std;
class studen{
    private:
        int age=18;
        string name;
    
    public:
    void setter(int age,string name){

        this ->age=age;
        this->name=name;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};


int main(){
    studen s;
    s.setter(20 ,"Ankit Maurya");
    return 0;
}