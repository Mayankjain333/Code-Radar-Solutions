#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check LSB using bitwise AND
    if (num < 0)
        printf("Set\n");
    else
        printf("Not Set");

    return 0;
}
