#include <iostream>
using namespace std;
class ATM{
public:
    double balance;
    ATM(){      //constructor
    balance=0.0;
}
void deposit(double amount){
if (amount>0){
    balance+=amount;
    cout<<"Deposited: "<<amount<<endl;}
    else{
        cout<<"Invalid deposit amount!"<<endl;
    }
}
void withdraw(double amount){
if (amount>0 && amount<=balance){
    balance-=amount;
    cout<<"Withdrawed: "<<amount<<endl;}
else{
    cout<<"Insufficient balance!"<<endl;}
    }
void checkBalance(){
    cout<<"The balance is: "<<balance<<endl;
}
};
int main(){
ATM user1;              //object creation
user1.deposit(5000);
user1.withdraw(2000);
user1.checkBalance();
}
