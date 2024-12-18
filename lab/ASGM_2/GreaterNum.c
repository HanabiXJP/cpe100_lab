//Find Greatest Number
#include <stdio.h>

int main(){
    int a,b, gnum;
    printf("Input first number : ");
    scanf("%d", &a);
    printf("Input second number : ");
    scanf("%d", &b);

    if(a > b)
    {
        gnum = a;
        printf("Greatest Number is %d", gnum);
    }
    else if(b > a)
    {
        gnum = b;
        printf("Greatest Number is %d", gnum);
    }
    else{
        printf("they are equal...");
    }
    return 0;
}