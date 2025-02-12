#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    char c[200];
    
    // Read two strings
    scanf("%s", a);
    scanf("%s", b);
    
    // Concatenate the two strings
    strcpy(c, a);        // Copy the first string to c
    strcat(c, b);        // Concatenate the second string to c
    
    // Print the concatenated string
    printf("%s", c);
    
    return 0;
}
