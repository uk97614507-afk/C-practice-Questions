#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }

    printf("Sum of even numbers from 1 to %d is: %d\n", n, evenSum);
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, oddSum);

    return 0;
}