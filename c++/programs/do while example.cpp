#include <iostream>
using namespace std;
int main(){
    char choice;
do{
    cout<<"do you want to continue? (yes/no): ";
    cin>>choice;
    if(choice!='Y' && choice!='N' && choice!='y' && choice!='n'){
        cout<<"Invalid choice !";
        }
}while(choice!='Y' && choice!='N' && choice!='y' && choice!='n');
if(choice=='Y' || choice=='y'){
    cout<<"You chose to continue.";}
else{
    cout<<"You chose to exit";
}
}
