#include <iostream>
using namespace std;
int main(){
int num;
start:
cout<<"Enter a poitive number (Enter 0 to exit): ";
cin>>num;
if(num<0){
cout<<"Negative number entered";
goto start;}
for(int i=1;i<=num;i++){
if(i==3){
cout<<"Skipping 3 using continue\n";
continue;}
if(i==7){
cout<<"Breaking loop at 7 using break\n";
break;}
cout<<"Number: "<<i<<endl;
}
}
