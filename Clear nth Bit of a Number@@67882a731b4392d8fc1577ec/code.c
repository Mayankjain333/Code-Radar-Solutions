#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = (a<<b)&1;
    printf("%d",ans);
    return 0;
}