#include<stdio.h>
int main()
{   
    int i,j;
    int matrix1[3][3];
    int matrix2[3][3];
    int addmatrix[3][3];
    printf("Enter first matrix : \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter Second matrix : \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            addmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Addition of matrix : \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",addmatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}