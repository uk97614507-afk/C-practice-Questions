#include <stdio.h>

int main() {
    int units;          // store the number of electricity units used
    float bill = 0.0;   // total bill
printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Apply different rates based on units
    if (units <= 50) {
        // First 50 units: Rs. 0.50 per unit
        bill = units * 0.50;
    } else if (units <= 150) {
        // First 50 units: 50 * 0.50
        // Remaining units: (units - 50) * 0.75
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        // First 50 units: 50 * 0.50
        // Next 100 units: 100 * 0.75
        // Remaining units: (units - 150) * 1.20
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        // Above 250 units:
        // First 50 at 0.50
        // Next 100 at 0.75
        // Next 100 at 1.20
        // Remaining at 1.50
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    printf("Electricity bill = %.2f\n", bill);

    return 0;
}



/*Simple explanation of electricity bill logic
Yeh program units ke hisaab se different rates lagata hai.

Code ka logic
if (units <= 50) {
    bill = units * 0.50;
}


Yeh matlab hai:

agar units 50 se kam ya barabar hai
to har unit par rate ₹0.50
total bill = units * 0.50
Example:
Agar units = 30
bill = 30 * 0.50 = 15
So bill = 15


Next condition
else if (units <= 150) {
    bill = 50 * 0.50 + (units - 50) * 0.75;
}

Yeh matlab hai:

pehle 50 units par rate ₹0.50
bache hue units par rate ₹0.75
Example:
Agar units = 120

pehle 50 units = 50 × 0.50 = 25
bache 70 units = 70 × 0.75 = 52.5
total = 25 + 52.5 = 77.5
Next condition


else if (units <= 250) {
    bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
}


Yeh matlab hai:

pehle 50 units = 0.50
agle 100 units = 0.75
baaki jo bacha units 150 ke baad us par = 1.20
Example:
Agar units = 200

50 × 0.50 = 25
100 × 0.75 = 75
remaining 50 × 1.20 = 60
total = 25 + 75 + 60 = 160
Last condition

else {
    bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
}

Yeh matlab hai:

50 units par 0.50
agle 100 units par 0.75
agle 100 units par 1.20
aur jo bhi units 250 ke upar bache, un par 1.50



Easy memory rule
0–50 → 0.50
51–150 → 0.75
151–250 → 1.20
250+ → 1.50
Har condition previous slabs ko add karke total bill banata hai.*/



