#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of C: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {  
        for (int j = 0; j < size; j++) {  
            // Print '*' for the top and bottom rows
            if (i == 0 || i == size - 1) {
                if (j > 0)  // Leave space on the left for a hollow effect
                    printf("*");
                else
                    printf(" ");
            }
            // Print '*' for the left vertical column
            else if (j == 0) {
                printf("*");
            }
            // Print space for hollow part
            else {
                printf(" ");
            }
        }
        printf("\n");  
    }

    return 0;
}
