#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
if(n==0 || n==1){
        return 1;}
else{
    return n*factorial(n-1);
}
   }
int main(){
int num;
cout<<"enter the number: ";
cin>>num;
if(num<0){
    cout<<"factorial of negative numbers do not exist";}
    else{
        cout<<"factorial of"<<num<<"is :"<<factorial(num)<<endl;
    }
}
