#include <stdio.h>

int main(void)
{
    int units;
    float bill = 0.0f;
    float surcharge;

    printf("Enter number of units consumed: ");

    if (scanf("%d", &units) != 1)
    {
        printf("Invalid input. Please enter a whole number.\n");
        return 1;
    }

    if (units < 0)
    {
        printf("Units cannot be negative.\n");
        return 1;
    }

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = 100 * 5 + (units - 100) * 10;
    }
    else if (units <= 300)
    {
        bill = 100 * 5 + 100 * 10 + (units - 200) * 15;
    }
    else
    {
        bill = 100 * 5 + 100 * 10 + 100 * 15 + (units - 300) * 20;
    }

    if (bill > 2000)
    {
        surcharge = bill * 0.05f;
        bill += surcharge;
        printf("Surcharge (5%%): Rs. %.2f\n", surcharge);
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}