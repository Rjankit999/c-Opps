#include<iostream>
using namespace std;

class parant{
  public:
    void display(){
        cout<<"This is Parent";
    }

    virtual void hello(){
        cout<<"Hellos form parent";
    }
};

class child : public parant{
    public:
     void display(){
        cout<<"This is Child";
    }

    void hello(){
        cout<<"Hellos form child";
    }
};

int main(){
    child c;
    c.hello();
    
}
