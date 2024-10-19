#include<iostream>
using namespace std;

int main(){
    int i,n,maxi=INT16_MIN,mini=INT16_MAX; // INT_MIN is minimum value of int and viceversa
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin>>arr[j];
    }
    
    for ( i = 0; i < n; i++){
        maxi=max(maxi,arr[i]); // max function
        // if(max<arr[i]){
        //     max=arr[i];
        // }
        mini=min(mini,arr[i]); // min function
        // if(min>arr[i]){
        //     min=arr[i];
        // }
    }
    cout<<"Max Value in Array is : "<<maxi<<endl;
    cout<<"Min value in Array is : "<<mini<<endl;
    return 0;
}