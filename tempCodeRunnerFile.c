#include <stdio.h>

int main() {
    char op;         // stores the operator like +, -, *, /
    float a, b;      // stores two numbers
    float result;    // stores the final result

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // switch checks which operator the user entered
    switch (op) {
        case '+':
            result = a + b;     // addition
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = a - b;     // subtraction
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = a * b;     // multiplication
            printf("Result: %.2f\n", result);
            break;

        case '/':
            // check if denominator is zero
            if (b == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                result = a / b; // division
                printf("Result: %.2f\n", result);
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
