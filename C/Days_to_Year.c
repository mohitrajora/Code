// Leap Year Ignored................
#include<stdio.h>

int main()
{
    int year,week,days,total_days,remaining_days;
    printf("Enter Total Days : ");
    scanf("%d",&total_days);
    
    year = total_days / 365;
    remaining_days=total_days % 365;
    week = remaining_days / 7;
    days = remaining_days % 7;
    
    printf("Year : %d\nWeek : %d\nDays : %d",year,week,days);
    return 0;

}