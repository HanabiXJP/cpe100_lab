//Inside String have a digit or not
#include <stdio.h>

int strcmp_custom(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0') 
    {
        if (*str1 != *str2) {
            return 0; // Not equal
        }
        str1++;
        str2++;
    }
    return 1;

    // Check if both strings have reached the end
    // if (*str1 == '\0' && *str2 == '\0') {
    //     return 1; // Equal
    // } else {
    //     return 0; // Not equal
    // }
}

int isAllDigit_V1(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        //ASCII '0' = 48 and '9' = 57
        if(str[i] < 48 || str[i] > 57)
        {
            return 0; // 0 = false
        }
        i++;
    }
    return 1; // 1 = true
}

int isAllDigit_V2(char *str)
{
    while ( *str != '\0')
    {
        if( *str < 48 || *str > 57)
        {
            return 0; // 0 = false
        }
        str++;
    }
    return 1; // 1 = true
}

int InputString()
{
    char someString[10];
    printf("Input String : ");
    scanf("%s", someString);
    while (strcmp_custom(someString, "END") == 0) 
    {
        if (isAllDigit_V1(someString))
            printf("V1 : All digit\n");
        else
            printf("V1 : Not all digit\n");

        if (isAllDigit_V2(someString))
            printf("V2 : All digit\n");
        else
            printf("V2 : Not all digit\n");
        return 0;
    }
    return 1;
}

int main()
{
    while (InputString() != 1)
    {
        InputString();
    }
    return 0;
}