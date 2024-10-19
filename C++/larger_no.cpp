#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter two values: "<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greatrer then "<<b;
    }
    else if (a==b)
    {
        cout<<a<<" is equal to "<<b;
    }
    
    else{
        cout<<b<<" is grater then "<<a;
    }
    return 0;
}