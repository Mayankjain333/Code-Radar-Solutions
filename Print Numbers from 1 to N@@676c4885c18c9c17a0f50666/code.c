#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    while(i<N){
        printf("%d" , i);
        i++;
    }
    printf("%d" , i);
    return 0;
}