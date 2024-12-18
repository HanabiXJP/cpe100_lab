#include <stdio.h>
#include <string.h>
int main()
{ 
    // Question 2
    int start, end;
    char cont[6] = "AGAIN";
    while (strcmp(cont, "AGAIN") != 1)
    {
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter end number: ");
        scanf("%d", &end);
        for (int i = 1; i <= 5; i++)
        {
            for (int j = start; j <= end; j++)
            {
                printf("%d ", j*i);
            }
            printf("\n");
        }
        printf("Type AGAIN to continue or END to quit: ");
        scanf("%s", cont);
    }
    printf("End of program. Goodbye.\n");
}