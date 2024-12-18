#include <stdio.h>
#include <math.h>

int main(){
    int a = 1 ,b = 5, c =4;
    float x1;
    x1 = (-b + sqrt((b*b) - (4*a*c)))/(2*a);
    printf("x1 =  %f", x1);
    return 0;
}