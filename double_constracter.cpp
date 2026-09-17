#include<iostream>
#include<string>
using namespace std;
// class Laptop {
//     public:
//     string brand;
//     int ram;
//    Laptop(){
//    brand="HP";
//    ram=8;
//    }
// };
// int main(){
//  Laptop l1;
//    cout<<"Brand: "<<l1.brand<<endl;
//    cout<<"RAM: "<<l1.ram<<"GB";
   
// }

class Student{
    public:
    string name;
    int age;
    Student(string name, int age){
        this ->name=name;
        this ->age=age;
    }

    void gifo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }



};

int main(){

    Student s("Ankit",18); 

    s.gifo();

    
}