#include <stdio.h>

int main()
{
    int counter = 1;
    while (counter <= 8)
    {
        printf("%d\n", counter);
        counter++;
    }
    printf("counter = %d", counter);
    return 0;
}