#include <iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // place pivot in correct position
    return i + 1;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // partition index

        quickSort(arr, low, pi - 1);         // sort left of pivot
        quickSort(arr, pi + 1, high);        // sort right of pivot
    }
}
int main(){
int arr[]={8,7,9,4,5,3,97,465};
int n=sizeof(arr)/sizeof(arr[0]);
quickSort(arr,0,n-1);
cout<<"Sorted array: ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
cout<<endl;}
}
