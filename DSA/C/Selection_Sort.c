#include<stdio.h>
int main()
{
    int i,j,n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {   
            if(arr[i]>arr[j])
           { int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }
    }

    for(b=0;b<n;b++)
    {
        printf("%d ",arr[b]);
    }
    return 0;
    
}