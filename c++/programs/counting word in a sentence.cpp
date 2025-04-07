#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
string sentence;
cout<<"enter a sentence : ";
getline(cin, sentence);
int wordcount=0;
istringstream iss(sentence);
string word;
while(iss>>word){
wordcount++;
}
cout<<"Number of words: "<<wordcount<<endl;
return 0;
}
