#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float Average = (a+b+c)/3.00;
    printf("Average: %.2f",Average);
    return 0;
}