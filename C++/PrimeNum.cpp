#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : "<<endl;
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<num<<" is NOT PRIME"<<endl;
            return 0;
        }
    }
    cout<<num<<" is PRIME";
}