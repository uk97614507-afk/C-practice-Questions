#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Keep dividing number by 10 until it becomes 0
    while (n != 0) {
        digit = n % 10;      // Extract last digit
        sum += digit;        // Add it to sum
        n = n / 10;          // Remove last digit
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}