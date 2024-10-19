#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0, end = size - 1;
    
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter Array size: " << endl;
    cin >> size;
    
    int arr[size];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverse(arr, size);

    // Print the reversed array
    cout << "Reversed array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
