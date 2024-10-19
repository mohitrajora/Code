#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    // Pattern 1

    // cout<<"Give a number for n ";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=3;j>0;j--){
            
    //         cout<<j<<" ";
            
    //     }
    //     cout<<endl;
    // }
    
    // Pattern 2

    // n=1;
    // for(i=1;i<=3;i++){
    //     for(j=1;j<=3;j++){
    //         cout<<n;
    //         n++;
    //     }
    //     cout<<endl;
    // }

    // Pattern 3

    // n=1;
    // for(i=1;i<=4;i++){
    //     for(j=1;j<=4;j++){
    //         if(i>=j){
    //             cout<<n<<" ";
    //             n++;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Pattern 4
    
    // for(i=1;i<=4;i++){
    //     n=i;
    // for(j=1;j<=i;j++){                                     
    //         cout<<n<<" ";
    //         n++;
    //     }
    //     cout<<endl;
    // }

    //Pattern 5
    
    // for(i=4;i>0;i--){
    //     n=5;
    //     n=n-i;
    //     for(j=4;j>=i;j--){                     // BOOSTERRRRRRRRRRR
    //         cout<<n<<" ";
    //         n--;
    //     }
    //     cout<<endl;
    // }

    // Pattern 6
    
    // for(i=1;i<4;i++){
        
    //     for(j=1;j<4;j++){
    //         char ch='A';
    //         ch=ch+j-1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern 7

    // char ch='A';
    // for(i=1;i<4;i++){
    //     for(j=1;j<4;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // Pattern 8

    // for(i=1;i<4;i++){
    //     char ch='A';
    //     ch=ch+i-1;
    //     for(j=1;j<4;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // Pattern 9

    // char ch='A';
    // for(i=1;i<4;i++){
        
    //     for(j=1;j<=i;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // Pattern 10
   
    // for(i=1;i<5;i++){
    //     char ch ='D';
    //     ch=ch-i+1;
    //     for(j=1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // Pattern 11
    
    // for(i=1;i<4;i++){
    //     for(j=1;j<4;j++){
    //         if(j<4-i){
    //             cout<<" ";               // IMPORTANTTTTTTTTTTTTTT
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Pattern 12

    // for(i=1;i<5;i++){
    //     for(j=1;j<5;j++){
    //         if(j<=i-1){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Pattern 13
   
    // n=1;
    // for(i=1;i<5;i++){
    //     for(j=1;j<5;j++){
    //         if(j<=i-1){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<n;
    //         }
    //     }
    //     n++;
    //     cout<<endl;
    // }

    // Pattern 14                                       FOCOUSSSSSSSSSSSSSSSSS

    // n=4;
    
    // for(i=1;i<=n;i++){
    //     for(j=i;j<n;j++){
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     for(int j = i - 1; j >= 1; --j){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // GPT

    //  int n = 4; // Number of rows

    // for (int i = 1; i <= n; ++i) {
    //     // Print leading spaces
    //     for (int j = i; j < n; ++j) {
    //         cout << "  ";
    //     }

    //     // Print ascending part of the pattern
    //     for (int j = 1; j <= i; ++j) {
    //         cout << j << " ";
    //     }

    //     // Print descending part of the pattern
    //     for (int j = i - 1; j >= 1; --j) {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    // Pattern 15
    n=5;
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n;j++){
            if(j<=n-i+1){
                cout<<j<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        for(j=n;j>=1;j--){
            if(j<=n-i+1){
                cout<<j<<" ";
            }
            else{
                cout<< "* ";
            }
        }
        cout<<endl;
    }
return 0;
}