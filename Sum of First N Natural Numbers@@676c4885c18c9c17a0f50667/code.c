#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    int sum = 0;
    while(i<=N){
        sum += i;
        printf("%d",sum);
        i++;
    }
    return 0;
}