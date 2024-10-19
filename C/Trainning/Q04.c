#include<stdio.h>
int main()
{
    int num1,num2;
    int *n1;
    n1=&num1;
    int *n2;
    n2=&num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("First number %d\n",*n2);
    printf("Second number %d",*n1);
    return 0;
    
}