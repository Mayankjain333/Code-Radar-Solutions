#include<stdio.h>

void reverse(int arr[],int a,int b){
    int i = a;
    int j = b;
    while(i<=j){
        int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
    }
}
int main(){
    int arr[n];
    int n;
    int k=3
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k = k%n;
    
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=6;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    return 0;
}