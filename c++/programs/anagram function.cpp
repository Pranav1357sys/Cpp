#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isanagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return str1==str2;
}
int main(){
    string word1,word2;
    cout<<"Enter 1st word: ";
    cin>>word1;
    cout<<"Enter word 2: ";
    cin>>word2;
    if (isanagram(word1,word2)){
        cout<<"is anagram";}
    else{
        cout<<"isn't anagram";
    }
}
