#include<stdio.h>
#include<stdlib.h>  // for malloc 
int main()
{   
    //All Sma
    /*int a;              
    int *p;
    int arr[10];
    float *q;
    char *r;*/
    int *p;

    p=(int*)malloc(16); // malloc return void type pointer so we have to tapecast malloc
    for(int i=0;i<4;i++)
    { scanf("%d",(p+i));}
    for(int i=0;i<4;i++)
     {printf("%d\n",*(p+i));}  // heap memory 
    free(p); // free that space where memory of p stored 

    return 0;
}