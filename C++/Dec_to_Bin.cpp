#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int decimal;
    int lastdigit;
    int i=0;
    int answer=0;
    cout<<"Enter a Number : "<<endl;
    cin>>decimal;

    while(decimal!=0){
        lastdigit=decimal%2;
        decimal=decimal/2;
        answer+=lastdigit*pow(10,i);
        i++;
    }
    cout<<"Binary Number : "<<answer;
    return 0;
}