#include <stdio.h>

int main() {
    int test = 0;

    printf("Test specific format of a variable\n");
    printf("Enter value of test: ");
    scanf("%d", &test);

    printf("Print format of test\n");
    printf("int %%d = %d\n", test); //ใช้แบบนี้เหมือนกันหมดก็ได้ ไม่ต้อง (float)test งี้
    printf("float %%f = %f\n", (float)test);  // Explicitly cast to float for proper formatting
    printf("double %%lf = %lf\n", (double)test);  // Explicitly cast to double for proper formatting
    printf("exponent %%e = %e\n", (double)test);  // Explicitly cast to double for proper formatting
    printf("significant %%g = %g\n", (double)test);  // Explicitly cast to double for proper formatting
    printf("character %%c = %c\n", (char)test);

    printf("End program\n");

    return 0;
}
