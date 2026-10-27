#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
  if (n <= 1) {
        printf("%d is not a prime number\n", n);
    } else if (n == 2) {
        printf("%d is a prime number\n", n);
    } else if (n % 2 == 0) {
        printf("%d is not a prime number\n", n);
    } else {
        printf("%d is a prime number\n", n);
    } 
    return 0;
}