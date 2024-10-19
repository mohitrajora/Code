#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int *ptr = lower_bound(arr,arr+10,12);

    int *ptr2 = upper_bound(arr,arr+10,3);

    if(ptr == arr+10){
        cout<<"Not found"<<endl;
         
    }else{
      cout<<*ptr<<endl;

    }
    
   

     if(ptr2 == arr+10){
        cout<<"Not found"<<endl;
    }else{
    cout<<*ptr2<<endl;
    }
    

    return 0;
}