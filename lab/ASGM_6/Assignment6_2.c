#include <stdio.h>

int findmin(int num1,int num2)
{
    int min;
    if(num1>num2)
    {
        min=num2;
    }
    else
    {
        min=num1;
    }
    return(min);
}

void findmax(int num1,int num2)
{
    int max;
    if(num1>num2)
    {
        max=num1;
    }
    else
    {
        max=num2;
    }
    printf("Maximum value is %d\n",max);
}
int main()
{
    int num1, num2, option=4, min;
    printf("Enter 2 number: ");
    scanf("%d%d",&num1,&num2);
    while(option!=3)
    {
        printf("\nChoose what to do from option below");
        printf("\n1. Find minimum");
        printf("\n2. Find maximum");
        printf("\n3. Exit program");
        printf("\n Enter option no.: ");
        scanf("%d", &option);
        if(option==1)
        {
            min = findmin(num1,num2);
            printf("Minimum value is: %d\n", min);
        }
        else if(option==2)
        {
            findmax(num1,num2);
        }
        else if(option!=3)
        {
            printf("input not correct\n");
        }
    }
    return 0;
}