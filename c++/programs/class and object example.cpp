#include <iostream>
using namespace std;
class Person{
public:
string name;
int age;
void displayinfo(){
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
}
};
int main(){
Person p;
p.name="Pranav";
p.age=21;
p.displayinfo();
}
