#include<stdio.h>

int main() {
    int a, b;
    char op;

    // Input two integers
    scanf("%d", &a);
    scanf("%d", &b);
    
    // Consume the leftover newline character
    getchar(); 
    
    // Input the operator
    scanf("%c", &op);

    // Perform the respective operation
    int add = a + b;
    int subtract = a - b;
    int multiply = a * b;
    float division = (float)a / b; // Ensure division works as float for precision

    // Print the result based on the operator
    if (op == '+') {
        printf("%d", add);
    }
    else if (op == '-') {
        printf("%d", subtract);
    }
    else if (op == '*') {
        printf("%d", multiply);
    }
    else if (op == '/') {
        if (b != 0) { // Check for division by zero
            printf("%d", division);
        } else {
            printf("Error: Division by zero");
        }
    }
    else {
        printf("Error: Invalid operator");
    }

    return 0;
}
