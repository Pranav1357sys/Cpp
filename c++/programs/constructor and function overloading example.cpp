#include <iostream>
using namespace std;
class Car{
public:
string brand;
int year;
//default constructor as no arguements are passed
Car(){
brand="tesla";
year=2025;
}
//default constructor as no arguements are passed
Car(string b,int y){
brand=b;
year=y;
}
void display(){
cout<<"brand : "<<brand<<" ,Year : "<<year<<endl;
}
};
int main(){
//object creation
Car car1;
car1.display();
Car car2("Toyota",2020);
car2.display();
}
