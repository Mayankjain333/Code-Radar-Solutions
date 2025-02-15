#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    while(i<=10){
        printf("%d",N*i);
        i++;
    }
    return 0;
}