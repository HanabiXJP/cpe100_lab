#include <stdio.h>

int main()
{
    while (1)
    {
        int start, end;
        char yn;
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter end number: ");
        scanf("%d", &end);
        for (int i = 1; i <= 5; i++)
        {
            for (int j = start; j <= end; j++)
            {
                printf("%d\t", j * i);
            }
            printf("\n");
        }
        printf("Do you want to continue (y/n)?");
        scanf(" %c", &yn);
        if (yn == 'n')
        {
            break;
        }
    }
    return 0;
}