#include <stdio.h>
#include <stdbool.h>

int main(){
    int max, num1 ,num2, num3;
    char con;
    while (true){
        printf("Largest of 3 numbers\n");
        printf("Enter 3 number:");
        scanf("%d %d %d", &num1, &num2, &num3);
        max = num1;
        if (max <= num2) {
            max = num2;
        }
        else if (max <= num3) {
            max = num3;
        }
        printf(" %d is the largest\n", max);
        printf("Do you want to continue (y/n)?\n");
        scanf("%s", &con);
        if (con == 'n') {
            printf("End of program. Goodbye.");
            break;
        }
    }
    return 0;
}