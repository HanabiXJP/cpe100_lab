#include <stdio.h>
void anotherAvg (int a, int b, float *TheAvg)
{
    float avg;
    avg = (a+b) / 2;
    *TheAvg = avg;
    //*1004 = 3
}

int main()
{
    int x=2, y=4;
    float ans;
    anotherAvg (x,y,&ans);
    printf("Average value is %.2f", ans);
    return 0;
}