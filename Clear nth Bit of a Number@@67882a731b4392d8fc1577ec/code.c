#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a&(~(1<<b));
    printf("%d",ans);
    return 0;
}