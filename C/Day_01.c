#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,i,a,b;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i=0;i<5;i++)
    {
        if(n>9)
        {
            a=n%10;
            b=n/10;
            sum=sum+a;
            n=b;
        }
    }
    printf("%d\n",sum+b);
    printf("%d",n);
    return 0;
}


// perfect code.......
/*int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    while(n!=0) {
        sum += n%10;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}*/