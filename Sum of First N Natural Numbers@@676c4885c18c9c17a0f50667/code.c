// #include<stdio.h>

// int main(){
//     int N;
//     scanf("%d",&N);
//     int i = 1;
//     int sum = 0;
//     while(i<=N){
        
//         sum += i;
//         i++;
//     }
//     printf("%d",sum);
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

