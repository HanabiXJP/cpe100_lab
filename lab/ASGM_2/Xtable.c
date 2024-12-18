//multiplication table
#include <stdio.h>

int main() {
    int multiplier, multiplicand;

    // Get user input for the multiplier
    printf("Enter the multiplier: "); //ตัวคูณ (n) เช่น แม่ n
    scanf("%d", &multiplier);

    // Get user input for the multiplicand
    printf("Enter the multiplicand: "); //ตัวทวีคูณ (k) เช่น แม่ n x k
    scanf("%d", &multiplicand);

    // Display the multiplication table
    printf("Multiplication Table for %d\n", multiplier);
    printf("---------------------------\n");

    for (int i = 1; i <= multiplicand; i++) {
        printf("%d x %d = %d\n", multiplier, i, multiplier * i);
    }

    return 0;
}
