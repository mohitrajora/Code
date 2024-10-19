#include<stdio.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2;
    float distance;

    printf("Type x1 and y1 :");
    scanf("%d %d",&x1,&y1);
    printf("Type x2 and y2 :");
    scanf("%d %d",&x2,&y2);

    distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("Distance is : %f",sqrt(distance));
    return 0;
}