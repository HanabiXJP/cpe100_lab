#include <stdio.h>

long int factorial(int n);

long int combination(int n, int r) {
    if (r < 0 || r > n) {
        return 0;  // Invalid combination
    }

    long int numerator = factorial(n);
    long int denominator = factorial(r) * factorial(n - r);

    return numerator / denominator;
}

long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n, r;

    // Case 1
    printf("To calculate nCr, enter n and r for Case 1: ");
    scanf("%d %d", &n, &r);
    printf("%dC%d = %ld\n", n, r, combination(n, r));

    // Case 2
    printf("To calculate nCr, enter n and r for Case 2: ");
    scanf("%d %d", &n, &r);
    printf("%dC%d = %ld\n", n, r, combination(n, r));

    // Case 3
    printf("To calculate nCr, enter n and r for Case 3: ");
    scanf("%d %d", &n, &r);
    printf("%dC%d = %ld\n", n, r, combination(n, r));

    return 0;
}
