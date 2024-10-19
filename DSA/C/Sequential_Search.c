#include<stdio.h>

int main()
{
    int arr[5]={15,3,56,2,43};
    int i,pos,item=2;

    for(i=0;i<5;i++)
    {
        if(arr[i]==item)
        printf("Position %d",i);
    }
}