#include<stdio.h>

int main(){
    int a , b;
    char op;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&op);
    int add = a+b;
    int subtract = a-b;
    int multitply = a*b;
    float division = a/b;
    if(op=='+'){
        printf("%d",add);
    }
    else if(op=='-'){
        printf("%d",subtract);
    }
    else if(op=='*'){
        printf("%d",multitply);
    }
    else if(op=='/'){
        printf("%f",division);
    }
    else{
        printf("error");
    }
    return 0;
}