#include <stdio.h>

int main() {
    int age;   // variable to store age

    printf("Enter your age: ");   // ask the user for age
    scanf("%d", &age);            // read the input age

    // Check whether age is 18 or more
    if (age >= 18) {
        printf("You are eligible to vote.\n");   // valid condition
    } else {
        printf("You are not eligible to vote.\n"); // false condition
    }

    return 0;
}