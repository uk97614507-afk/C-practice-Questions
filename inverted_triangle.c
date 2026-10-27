#include <stdio.h>

int main() {
    int n = 5; // number of rows

    // outer loop for rows, starting from top to bottom
    for (int i = n; i >= 1; i--) {
        // inner loop prints stars for each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // move to next line
    }

    return 0;
}

/*
Output:
* * * * *
* * * *
* * *
* *
*
*/