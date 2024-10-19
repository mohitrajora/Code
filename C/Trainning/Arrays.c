#include<stdio.h>
int main()
{
    /*int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;*/

    // 2D Arrays
    
    int arr[8];     // 1D array 8 variable
    int a[2][4];  // 2D array 8 variable
    int i,j;
    printf("Enter the marks of students of IX and X \n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}