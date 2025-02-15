#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    int sum = 0;
    while(i<=N){
        printf("%d",sum);
        sum += i;
        i++;
    }
    return 0;
}