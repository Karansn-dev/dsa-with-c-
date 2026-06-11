#include <iostream>
using namespace std;

// Function to check if the array is sorted in ascending order
bool SortedArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 3, 2, 4, 41, 5, 34, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (SortedArray(arr, n)) {
        cout << "Array is sorted in ascending order." << endl;
    } else {
        cout << "Array is NOT sorted in ascending order." << endl;
    }
    return 0;
}