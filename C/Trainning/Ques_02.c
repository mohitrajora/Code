#include<stdio.h>
int main()
{   
    /*char op;
    printf("Where is Lake Fathe Sagar?\nA)Jaipur\nB)Kota\nC)Udaipur\nD)Jaisalmer");
    scanf("%c",&op);
    if(op=='c')
    {
        printf("KYA KIJIYEGA AAP ITNI DHAN RASHI KA!!!");
    }
    else
    {
        printf("OHHHOOOOOO aapko ghr jana padega");
    }*/

    int percentage;
    printf("percentage : ");
    scanf("%d",&percentage);
    if(percentage>90)
    {
        printf("A+");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("A");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("B");
    }
    else if(percentage>=55 && percentage<70)
    {
        printf("C");
    }
    else{
        printf("Fail");
    }
    return 0;
}
