#include <stdio.h>
#include <math.h>//math.h ka use pow()function  ke lye kya gya he,pow()Compound Interest me aane wali power(T)calculate krta he

int main() {
    float P, R, T, CI, Amount;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    printf("Compound Interest = %.2f\n", CI);
    printf("Total Amount = %.2f\n", Amount);

    return 0;
}
