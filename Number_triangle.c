#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the number of rows in the triangle.
    for (i = 1; i <= rows; i++) {
        // Inner loop prints numbers from 1 to the current row number.
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line after each row is printed.
        printf("\n");
    }

    return 0;
}