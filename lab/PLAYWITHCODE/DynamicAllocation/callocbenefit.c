#include <stdio.h>
#include <stdlib.h>

int main() {
    // Number of elements in the array
    int numElements = 5;

    // Using malloc to allocate memory for an array of integers
    int* array_malloc = (int*)malloc(numElements * sizeof(int));

    // Using calloc to allocate memory for an array of integers
    int* array_calloc = (int*)calloc(numElements, sizeof(int));

    // Display the content of the arrays
    printf("Array allocated with malloc (uninitialized):\n");
    for (int i = 0; i < numElements; ++i) {
        printf("%d ", array_malloc[i]); // The values are uninitialized and may contain garbage
    }
    putchar('\n');

    printf("Array allocated with calloc (initialized to zero):\n");
    for (int i = 0; i < numElements; ++i) {
        printf("%d ", array_calloc[i]); // The values are initialized to zero
    }
    putchar('\n');

    // Don't forget to free the allocated memory
    free(array_malloc);
    free(array_calloc);

    return 0;
}
