#include <iostream>
using namespace std;
void modify(int x){
x=x+10;
cout<<"Value of x: "<<x<<endl;
}
int main(){
int a=5;
cout<<"Value of a: "<<a<<endl;
modify(a);
cout<<"Value of a: "<<a<<endl;
return 0;
}
