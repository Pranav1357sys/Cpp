#include <iostream>
using namespace std;
void modify(int &x){
x=x+10;
}
int main(){
int a=5;
modify(a);
cout<<"Value of a: "<<a<<endl;
return 0;
}
