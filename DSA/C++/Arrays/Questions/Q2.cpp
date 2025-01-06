// Find a unique element in a array

#include<iostream>
using namespace std;

int findunique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int uniqueElement = findunique(arr,size);
    cout<<uniqueElement;
    return 0;
}