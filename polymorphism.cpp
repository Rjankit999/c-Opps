#include<iostream>
using namespace std;

class parant{
  public:
    void display(){
        cout<<"This is Parant";
    }
};

class child : public parant{
    public:
     void display(){
        cout<<"This is Child";
    }
};

int main(){
    parant c;
    c.display();
    
}
