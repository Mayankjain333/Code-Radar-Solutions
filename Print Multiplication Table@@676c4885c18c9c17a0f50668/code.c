// #include<stdio.h>

// int main(){
//     int N;
//     scanf("%d",&N);
//     int i = 1;
//     while(i<=10){
//         printf("%d x %d = %d\n", N, i, N * i);
//         i++;
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int mul = 1;
    int i = 1;
    while(i<=10){
        printf("%d x %d = %d" , n , i , n*i);
        i++;
    }
    return 0;
}

