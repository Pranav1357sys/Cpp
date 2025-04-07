#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Elements:  ";
    cin >> n;

    int arr[n];
    cout<< "Enter Elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;

    //logic
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
     if (second == INT_MIN) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element is: " << second << endl;
    }

    return 0;
}
