#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[i];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int secmax = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != max || secmax<arr[i]){
            secmax = arr[i];
        }
       
    }
    printf("%d",secmax);
    return 0;
}