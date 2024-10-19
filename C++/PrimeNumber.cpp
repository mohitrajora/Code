#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter a number : "<<endl;
   cin>>n;

   bool Isprime = 1;  // defualt value of global varibale is false in cpp

   for (int i = 2; i <n; i++)
   {
      if(n%i==0){
         Isprime=0;
         break;
      }
   }
   if(Isprime==0){
      cout<<n<<" is Not a Prime Number"<<endl;
   }
   else{
      cout<<n<<" is a Prime Number"<<endl;
   }
   return 0;
   
}