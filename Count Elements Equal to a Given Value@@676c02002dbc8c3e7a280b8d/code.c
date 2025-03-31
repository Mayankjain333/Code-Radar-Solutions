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
    int mostFrequent = arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i]==k){
                int maxFreq += 1;  // Start counting the current element
            }
        }

        // Update most frequent element
        if (count > maxFreq) {
            maxFreq = count;
            mostFrequent = arr[i];
        }
    }

    printf("%d", maxFreq);

    return 0;
}
