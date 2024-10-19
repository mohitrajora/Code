#include<iostream>
using namespace std;

bool Search(int arr[],int size,int key){
    for(int j=0;j<size;j++){
        if(key==arr[j]){
            return true;
        }
    }
    return false;
}

int main(){
    int size,key;
    cout<<"Size of array : "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter elements for array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the searching element"<<endl;
    cin>>key;
    bool found = Search(arr,size,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    return 0;
}