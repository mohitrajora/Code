#include<stdio.h>

void main(){
    int i,j,n;
    printf("give a number : ");
    scanf("%d",&n);

    for ( i = 1; i <= 2*n-1; i++)
    {
        for ( j = 2*n-1; j>=i; j--)
        {
            if(  i=2*n-1 || j==1){
                printf(" %d ",n);
            }
            else 
            printf(" ");
        }
        printf("\n");
        
    }
    
}