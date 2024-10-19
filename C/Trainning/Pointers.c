#include<stdio.h>
int main()
{
    // Pointers

    /*int x=50;
    int *y;                 // pointer variable
    y=&x;
    int **z;                // Double pointer
    z=&y;
    //printf("%d",x);
    //printf("\n%u",&x);    //  %u used for address. We can use also use %d
    
    // & address of operator or referencing operator
    // * indirection or derefrencing operator
    // & - return the address
    // * - return the value

    /*printf("\n%d",*&x);   // address of x pe kya value he
    printf("\n%d",*y);
    printf("\n%d",y);
    printf("\n%d",*&y);
    printf("\n%d",&x);
    printf("\n%d",&y);
    printf("\n%d",**z);
    printf("\n%d",*z);
    printf("\n%d",&z);
    printf("\n%d",*&z);*/

    int x=10;
    int y=20;
    char ch='*';
    char *c=&ch;
    int *ptr=&x;
    int *ptr1=&y;
    int a[3]={10,20,30};
    int *k=a;
   /* printf("\n%d",*(&x)+1);
    printf("\n%d",*(&x)-3);
    printf("\n%d",ptr);
    printf("\n%d",ptr+1);
    printf("\n%d",c);
    printf("\n%d",c+1);*/

    printf("%d\n",&a[0]);   // address of array
    printf("%d\n",k);       // address of array
    printf("%d\n",*k);      // value of 0th index 
    printf("%d\n",*(k+1));  // value of 1th index
    printf("%d\n",*(k+2));
    printf("%d\n",*(k+3));
    printf("%d\n",*(k)+1);

}