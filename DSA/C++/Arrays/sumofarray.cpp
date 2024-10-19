#include<iostream>
using namespace std;

int SumofArray(int arr[],int size){
    int sum=0;
    for(int j=0;j<size;j++){
        sum+=arr[j];
    }
    return sum;
}

int main(){
    int size;
    cout<<"Give size of aaray : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter values of array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int result=SumofArray(arr,size); // no need of []
    cout<<"Sum of Array is : "<<result;
    return 0;
}