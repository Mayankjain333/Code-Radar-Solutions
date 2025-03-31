#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d",&k);

    int maxFreq = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i]==k){
                maxFreq += 1;  // Start counting the current element
            }
        }

        printf("%d", maxFreq);
        return 0;
    }


