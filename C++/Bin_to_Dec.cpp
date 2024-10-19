#include<iostream>
using namespace std;

int main(){
    int binary;
    int base=1;
    int answer=0;
    int lastdigit;
    cout<<"Enter a Number in Binary : "<<endl;
    cin>>binary;

    while(binary!=0){
        lastdigit=binary%10;
        binary=binary/10;
        answer+=lastdigit*base;
        base=base*2;
    }
    cout<<"Answer : "<<answer<<endl;
    return 0;
}