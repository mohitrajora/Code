#include<stdio.h>

 void shaadi(void); // fuction declaration
void main()
{
    //Functions
    /*
        Function  Declration : function dhikhta kese he
        Function  Defination : function ka actual kaam
        Function  Calling    : kb function ko kaam krna he

        1. No return no arrgument
        2. Return type no arrgument
        3. no return but arrgument
        4. return type and arrgument
    */

    void shaadi();  // calling
     
}
void shaadi(void)
{
    printf("NA kuch leke gya na kuch leke aaya");
}
void shaadi(int)
{
    printf("Kuch leke gya lekin kuch laaya nhi");
}
int shaadi(void)
{
    printf("Kuch nhi leke gya pr kuch leke aaya");
}
int shaadi(int)
{
    printf("Kuch leke bhi gya or kuch leke bhi aaya");
}