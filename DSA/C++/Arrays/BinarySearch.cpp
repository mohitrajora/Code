#include <iostream>
using namespace std;

void binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {  // Found the key
            cout << "Key found at index " << mid << endl;
            return;
        } else if (arr[mid] < key) {
            start = mid + 1;  // Search in the right half
        } else {
            end = mid - 1;  // Search in the left half
        }
    }
    cout << "Key not found" << endl;  // Only print if the loop completes without finding the key
}

int main() {
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int key = 8;
    int size = 6;
    binarySearch(arr, size, key);
    return 0;
}