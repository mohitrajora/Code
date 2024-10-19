#include<iostream>
using namespace std;

void SwapAlternate(int arr[],int size){
    for(int j=0;j<size;j+=2){
        if(j+1>=size){
            arr[j]=arr[j];
        }
        else{
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

void printArray(int arr[],int size){
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int size;
    cout<<"enter size of array : "<<endl;
    cin>>size;
    
    int arr[size];
    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    SwapAlternate(arr,size);
    printArray(arr,size);
    return 0;
}