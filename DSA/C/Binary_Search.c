#include<stdio.h>
int main()
{
    int n,key,i,mid;
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    int start=0;
    int end=n;
    

    while(start<=end)
    {   
        mid=(start+end)/2;
        if(key==arr[mid])
        {
            printf("%d",mid);
            break;
        }
        else if(key>arr[mid])
        {
           start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
    }
    return 0;
}