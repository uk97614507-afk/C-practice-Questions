#include <stdio.h>

int main() {
    int n = 5; // number of rows

    // outer loop controls rows
    for (int i = 1; i <= n; i++) {
        // inner loop prints stars in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // move to next line
    }

    return 0;
}

/*
Output:
*
* *
* * *
* * * *
* * * * *
*/
