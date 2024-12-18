#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** matrix = calloc(3 ,sizeof(int*));
    int i = 0;
    for (i=0; i<3 ; i++)
    {
        matrix[i] = calloc(4, sizeof(int));
        printf("%d\n", *matrix[i]);
        free(matrix[i]);
    }
    free(matrix);
    return 0;

}
