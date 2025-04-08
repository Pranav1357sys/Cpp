#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1; // Not found
}

int main() {
    int arr[] = {1, 2, 5, 7, 9}; // Must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, size, target);
    if (result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not found";

    return 0;
}
