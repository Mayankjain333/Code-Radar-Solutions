#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    for (int i = a; i > 0; i--) {  // Outer loop for rows
        for (int j = 0; j < i; j++) { // Inner loop for printing '*'
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
