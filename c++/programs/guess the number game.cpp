#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int N=rand()%100+1;
int guess,attempts=0;
cout<<"Guess a number btw 1 to 100: ";
while(true){
        cin>>guess;
        attempts++;
    if(guess>N){
        cout<<"Your guess is too high , try again";
        }
    else if(guess<N){
        cout<<"Your guess is too low, try again";}
    else{
        cout<<"Your guess is correct"<<attempts<<"Attempts ";
        break;
    }
}return 0;
}
