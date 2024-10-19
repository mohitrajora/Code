#include<iostream>
using namespace std;

struct employe
{
    char name[50];
    int age;
    float height;
};

employe takedata();
void returndata(employe);
int main()
{
    employe e[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the details of employe"<<i+1<<endl;
        e[i]=takedata();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"The details are : "<<i+1<<endl;
        returndata(e[i]);
    }
    return 0;
} 
employe takedata()
{
    employe e1;
    cout<<"Name : "<<endl;
    cin>>e1.name;
    cout<<"Age : "<<endl;
    cin>>e1.age;
    cout<<"height : "<<endl;
    cin>>e1.height;
    return e1;
}
void returndata(employe e2)
{
    cout<<"Name : "<<e2.name<<endl<<"Age : "<<e2.age<<endl<<"Height : "<<e2.height<<endl;
}