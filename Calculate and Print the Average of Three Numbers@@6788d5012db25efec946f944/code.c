#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int Average = (a+b+c)/3;
    printf("Average: %.2f",Average);
    return 0;
}