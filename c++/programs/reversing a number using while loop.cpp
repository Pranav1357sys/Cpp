#include <iostream>
using namespace std;
int main(){
int N,reversed=0;
cout<<"enter N: ";
cin>>N;
while(N>0){
    int last_dig=N%10;
    reversed=(reversed*10)+last_dig;
    N/=10;
}
cout<<"Reversed number is: "<<reversed<<endl;
}
