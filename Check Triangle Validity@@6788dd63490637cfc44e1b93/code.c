#include<stdio.h>

int main(){
    int side1,side2,side3;
    scanf("%d",&side1);
    scanf("%d",&side2);
    scanf("%d",&side3);
    if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}