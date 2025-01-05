// Can we represente x into 2^n take input from the user

#include<bitset>
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number :"<<endl;
    cin>>number;
    int onescount=bitset<32>(number).count();
    if(onescount==1)
    cout<<"Yes we can"<<endl;
    else
    cout<<"We cant"<<endl;
}