#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n,nextNumber,i;
    n=10;
    cout<<a<<" ";
    cout<<b<<" ";

    for(i=1;i<=10;i++){
        nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }
}