#include <iostream>
using namespace std;

int main() {
    int n, i;
    long factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist.";
    } else if(n!=0){
        for(i = 1; i <= n; ++i) {
            factorial = factorial*i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }
    else{
        cout<<"Factorial of 0 = 1";
    }
    return 0;
}
