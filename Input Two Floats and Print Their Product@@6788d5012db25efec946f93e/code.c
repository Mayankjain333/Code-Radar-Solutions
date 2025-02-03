#include <stdio.h>

int main(){
    float a;
    float b;
    scanf("%.2lf",&a);
    scanf("%.2lf",&b);
    float c = a*b;
    printf("Product: %.2lf",c);
    return 0;
}