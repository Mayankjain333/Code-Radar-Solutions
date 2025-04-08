#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    countEven = 0;
    countOdd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            countEven+=1;
        }
        else{
            countOdd+=1;
        }

    }
    printf("%d %d",countEven,countOdd);
    return 0;
}