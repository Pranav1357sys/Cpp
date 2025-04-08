#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high) {
    if (low >= high) return;

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

    quicksort(arr, low, i);
    quicksort(arr, i + 2, high);
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, size - 1);

    for (int x : arr) cout << x << " ";
    return 0;
}
