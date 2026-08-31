#include<iostream>
#include<string>
using namespace std;

class BankAccount{

    public:
    string name;
    float balance;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deopsit(float amount){
        balance+=amount;
    }
    void wedraw(float amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"wedraw is successfull"<<endl;
        }
        else{
            cout<<"Chack a Bank Balance Error"<<endl;
        }
    }
  
};

int main(){
    BankAccount user1;
    user1.name="Ankit Maurya";
    user1.balance=1000;
    user1.display();
    user1.deopsit(500);
    user1.display();
    user1.wedraw(2000);
    user1.display();

}