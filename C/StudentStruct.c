#include<stdio.h>

struct student {
    char name[50];
    char rollno[10];
    float marks;
} s;
int main()
{
    printf("Enter information :-\n");
    printf("Enter name: ");
    fgets(s.name,sizeof(s.name),stdin);

    printf("Enter roll number: ");
    scanf(s.rollno,sizeof(s.rollno),stdin);

    printf("Enter avg marks: ");
    scanf("%f",&s.marks);

    printf("Displaying information :-\n");
    printf("Name: ");
    printf("%s",s.name);
    printf("Roll number: %s",s.rollno);
    printf("Avg marks: %.1f\n",s.marks);

    return 0;
}