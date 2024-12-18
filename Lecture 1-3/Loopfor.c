#include <stdio.h>

int main()
{
    int counter, i;
    i = 12;
    for(counter = 8; counter <= i; counter++)
    {
    printf("counter before += %d\n", counter);
    counter += 1;
    printf("counter after += %d\n", counter);
    }
    printf("counter = %d",counter);
}