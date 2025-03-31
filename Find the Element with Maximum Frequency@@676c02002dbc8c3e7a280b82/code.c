#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Read input array
    for (int i = 0; i < n; i++) {  // ✅ Fixed loop condition
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0;
    int mostFrequent = arr[0];

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;  // Start counting the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increase frequency count
            }
        }

        // Update most frequent element
        if (count > maxFreq) {
            maxFreq = count;
            mostFrequent = arr[i];
        }
    }

    // Print the most frequent element and its frequency
    printf("%d)", mostFrequent, maxFreq);

    return 0;
}
