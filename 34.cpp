// Bank account में balance को private रखो।
#include<iostream>
using namespace std;
class Bank{
    private:
   int balance=10000;
   public:
   void setter(int salary){
    balance+=salary;
   }
   void show(){
    cout<<balance;
   }
};


int main(){
   Bank user;
   user.setter(500);
   user.show();
    return 0;
}