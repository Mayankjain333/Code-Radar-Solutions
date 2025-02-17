#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check LSB using bitwise AND
    if (num & 1)
        printf("LSB is set (1)\n");
    else
        printf("LSB is not set (0)\n");

    return 0;
}
