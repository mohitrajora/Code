#include <bits/stdc++.h>
using namespace std;

int  size=1;

class account{
    private:
    int account_no;
    char holder_name[20];
    float balance;

    public:
    account(){
        account_no=1000000;
        balance=0;
    }
    void deposit(){
         float dp;
         cout<<"----------- DEPOSIT WINDOW ---------------"<<endl;
         cout<<"ENTER AMOUNT TO DEPOSIT "<<endl;
         cout<<"AMOUNT: ";
         cin>>dp;
         balance+=dp;
         cout<<"AMOUNT CREDITED OF "<<dp<<endl;
         cout<<"CURRENT BALANCE : "<<balance<<endl;
    }

    void create_account(){
        int n;
        cout<<"------- CREATING A NEW ACCOUNT ----------"<<endl<<endl;
        cout<<"PLEASE FILL THE ALL THE DETAILS MENTIONED BELOW"<<endl;
        cout<<"HOLDER NAME: ";
        cin>>holder_name;
        account_no=account_no+size;
        cout<<"ACCOUNT NUMBER : "<<account_no<<endl;
        cout<<"--------DO YOU WISH TO DEPOSIT ANY AMOUNT!!---------"<<endl;
        cout<<" 1:yes\n 2:no"<<endl;
        cin>>n;
        if(n==1)
        deposit();
        size++;  
    }
    int search(int n){
        if (n==account_no){
            return 1;
        }
    }
    void dspbalance(){
        cout<<"YOUR BALANCE : "<<balance<<endl;
    }

    void withdraw(){
        int db;
        cout<<"------------ WITHDRAW WINDOW ----------------"<<endl;
        cout<<"AMOUNT: ";cin>>db;
        balance-=db;
        cout<<"AMOUNT DEBITED : "<<db<<endl;
        cout<<"CURRENT BALANCE : "<<balance<<endl;
     }
    
};

void cmacc(int n){
    account macc[n];
    for (int i=0;i<n;i++){
        macc[i].create_account();
    }
}


int main(){
    int choice,i;
    account tacc[100];
    while (choice!=6){
    cout<<"------------- WELCOME TO UNKNOWN BANK ---------------"<<endl<<endl;
    cout<<"------------- ENTER YOUR CHOICE ---------------------"<<endl;
    cout<<" 1:CREATE AN ACCOUNT"<<endl<<" 2:CHECK BALANCE"<<endl<<" 3:WITHDRAW"<<endl;
    cout<<" 4:DEPOSIT"<<endl<<" 5:CREATE MULTIPLE ACCOUNTS"<<endl;
    cout<<" 6:EXIT "<<endl<<endl;
    cin>>choice;

    switch(choice){

        case 1: tacc[size-1].create_account();break;

//-------------------------case division--------------------

        case 2: int n;cout<<"ENTER YOUR ACCOUNT NO: ";
                cin>>n;
                for(i=0;i<size;i++){
                cout<<i<<endl;
                if(tacc[i].search(n)==1){
                    tacc[i].dspbalance();break;
                }}break;

//-------------------------case division--------------------

        case 3: cout<<"ENTER YOUR ACCOUNT NO: ";
                cin>>n;
                for(i=0;i<size;i++){
                if(tacc[i].search(n)==1){
                    tacc[i].withdraw();break;
                }}break;




 //-------------------------case division--------------------


        case 4: cout<<"ENTER YOUR ACCOUNT NO: ";
                cin>>n;
                for(i=0;i<size;i++){
                if(tacc[i].search(n)==1){
                    tacc[i].deposit();break;
                }}break;

 //-------------------------case division--------------------
        case 5: cout<<"---------- MULTIPLE ACCOUNTS WINDOW ----------"<<endl;
                cout<<"HOW MANY ACCOUNTS DO YOU WISH TO CREATE : ";
                cin>>n;
                cmacc(n);
                break;

 //-------------------------case division--------------------       
        case 6:break;break;
        }
    }
    return 0;
}