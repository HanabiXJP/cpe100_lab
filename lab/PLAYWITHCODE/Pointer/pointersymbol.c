#include <stdio.h>
int main()
{
    int num = 10;  // Declare an integer variable
    int *ptr;      // Declare a pointer to an integer

    ptr = &num;    // Assign the address of num to the pointer
    printf("%d", ptr);
    return 0;
}
