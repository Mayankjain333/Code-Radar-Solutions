#include<stdio.h>

int main(){
    int CP , SP;
    scanf("%d",&CP);
    scanf("%d",&SP);
    if(CP>SP){
        printf("Loss");
    }
    else if(CP<SP){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}