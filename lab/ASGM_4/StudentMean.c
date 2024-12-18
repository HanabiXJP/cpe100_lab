#include <stdio.h>
#include <math.h>

int main()
{
    int score[10];
    int i = 1, sum = 0, sumSD = 0;
    float avg = 0.0 ,SD = 0.0;
    printf("Input student scores (type -1 to start calculation)\n");
    for (i; i <= 10; i++)
    {
        printf("Enter score of student %d: ", i);
        scanf("%d", &score[i-1]);
        sum += score[i-1];
        sumSD += score[i-1]*score[i-1];
        if(score[i-1] == -1)
        {
            break;
        }
    }
    avg = sum/(i-1);
    SD = sqrt((sumSD/(i-1))-(avg*avg));
    printf("Mean score of %d is %.2f, SD = %.2f",(i-1), avg, SD); 
    return 0;
}