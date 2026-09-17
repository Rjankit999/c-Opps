#include<iostream>
using namespace std;

class Shap{
    public:
    virtual void draw()=0; //This is virchule funsction
 
};

class Cricle :public Shap{
    public:
        void draw(){
            cout<<"draw a circle\n";
        }
};

int main(){
    Cricle c;
   c.draw();
    
}
