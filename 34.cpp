// Bank account में balance को private रखो।
#include<iostream>
using namespace std;
class Bank{
    private:
   int balance=10000;
   public:
   void show(){
    cout<<balance;
   }
};


int main(){
   Bank user;
   user.show();
    return 0;
}