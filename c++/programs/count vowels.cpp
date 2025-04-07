#include <iostream>
#include <string>
using namespace std;
int countvowels(string str){
int count=0;
for(char c: str){
c=tolower(c);
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
count++;
}
}
return count;
}
int main(){
string input;
cout<<"Enter a string: ";
getline(cin, input);
int count=countvowels(input);
cout<<"Number of vowels: "<<count<<endl;
}
