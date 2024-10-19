#include<stdio.h>

int main()
{
    int arr[9];
    int num,i,min;

    printf("Enter some values : ");
    for(i=0;i<9;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<9;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Smallest number among these is : %d",min);
    return 0;

}