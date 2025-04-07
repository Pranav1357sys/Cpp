#include <iostream>
using namespace std;
int main(){
int a=10;
int *p=&a;
cout<<"Value of a: "<<a<<endl;
cout<<"Address of a: "<<&a<<endl;
cout<<"pointer p(address of a):"<<p<<endl;
cout<<"value of p: "<<*p<<endl;
}
