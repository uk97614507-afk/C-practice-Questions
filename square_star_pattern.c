#include <stdio.h>

int main() {
    int n = 5; // Number of rows and columns in the square

    // Outer loop: runs for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop: prints stars in the same row
        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

/*
Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/