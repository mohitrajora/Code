// Find a duplicate element in an array...

#include<iostream>
using namespace std;

int duplicate(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){   // this is xor the elements off arrays with ans
     ans=ans^arr[i];   
    }
    for(int i=1;i<size;i++){  // this xor the number from 1 to size to find which is duplicate
        ans=ans^i;
    }
    return ans;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int duplicateElement = duplicate(arr, size);
    cout<<duplicateElement;
    return 0;
}