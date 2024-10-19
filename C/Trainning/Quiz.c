#include<stdio.h>

void questions(void);
int main()
{
    printf("## Welcome to Quiz ##\n");
    questions();
    return 0;
}

void questions(void)
{   
    int useranswer;
    printf("Question 1: What is the capital of France?\n 1)Paris\n 2)London\n 3)Berlin\n 4)Madrid\n");
    printf("your answer:");
    scanf("%d",&useranswer);
    if (useranswer==1)
    {
        printf("Question 2: Which planet is known as the Red Planet?\n 1)Venus\n 2)Mars\n 3)Jupiter\n 4)Saturn\n");
        scanf("%d",&useranswer);
        if(useranswer==2)
        {
            printf("Question 3: What is 7 multiplied by 8?\n 1)48\n 2)56\n 3)64\n 4)72\n");
            scanf("%d",&useranswer);
            if(useranswer==2)
            {
                printf("Question 4: What is the largest mammal in the world?\n 1)Elephant\n 2)Giraffe\n 3)Blue Whale\n 4)Cheetah\n");
                scanf("%d",&useranswer);
                if(useranswer==3)
                {
                    printf("Question 5: What gas do plants absorb from the atmosphere?\n 1)Nitrogen\n 2)Oxygen\n 3)Carbon Dioxide\n 4)Hydrogen\n");
                    scanf("%d",&useranswer);
                    if(useranswer==3)
                    {
                        printf("7 Crore !!!!!!!");
                    }
                    else
                    {
                        printf("TATA...........");
                    }
                }
                else
                {
                    printf("TATA...........");
                }
                
            }
            else
            {
             printf("TATA...........");
            }
        }
        else
        {
                printf("TATA...........");
         }
    }
    else
    {
        printf("TATA...........");
    }
    
}