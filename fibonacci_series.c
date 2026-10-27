#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    // Print first two numbers
    if (n >= 1) {
        printf("%d ", first);   // 0
    }
    if (n >= 2) {
        printf("%d ", second);  // 1
    }

    // Generate remaining terms
    for (int i = 3; i <= n; i++) {
        next = first + second;   // add previous two numbers
        printf("%d ", next);

        // shift values forward
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}


/*Explanation
Fibonacci series starts like this:

0, 1, 1, 2, 3, 5, 8, 13, ...

Logic
first = 0
second = 1
next = first + second
Then:

first = second
second = next
This keeps moving forward in the series.

Why this works
Suppose series is:
0, 1, 1, 2, 3, 5

For next term:
next = first + second;



Example:

first = 1
second = 2
next = 3
Then:

first becomes 2
second becomes 3
So the next value becomes correct.

When to use Fibonacci
pattern-based questions
series generation
loops practice
Example:

first = 1
second = 2
next = 3
Then:

first becomes 2
second becomes 3
So the next value becomes correct.

When to use Fibonacci
pattern-based questions
series generation
loops practice*/