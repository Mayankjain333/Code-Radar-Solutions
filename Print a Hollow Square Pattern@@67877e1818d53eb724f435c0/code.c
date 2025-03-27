#include <stdio.h>

void print_hollow_C(int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == size - 1) {  
            // Print top and bottom horizontal line
            printf(" ");
            for (int j = 0; j < size - 1; j++) {
                printf("*");
            }
        } else {
            // Print vertical line on the left
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of C: ");
    scanf("%d", &size);
    print_hollow_C(size);
    return 0;
}
