/*#include<stdio.h>
int main(){
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("This is a leap year\n");
    } else {
        printf("This is not a leap year\n");
    }

    return 0;
}*/






/*#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    while (year > 0) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year\n", year);
        } else {
            printf("%d is not a leap year\n", year);
        }
        break; // sirf ek baar run karna ho to break use hota hai
    }

    return 0;
}*/
/*Simple explanation
while (year > 0) matlab jab year 0 se bada ho tab loop chalega.
break dalne se loop ek hi baar chalta hai, phir ruk jata hai.
Agar aapko baar-baar input lena ho, tab while ka use alag tarike se hota hai.*/





#include <stdio.h>

int main() {
    int year;

    while (1) {
        printf("Enter year: ");
        scanf("%d", &year);

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year\n", year);
        } else {
            printf("%d is not a leap year\n", year);
        }

        printf("Do you want to continue? (1/0): ");
        int choice;
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }
    }

    return 0;
}



/*Explanation
while (1) means loop forever until we manually break.
User input leta hai.
Year leap year hai ya nahi check hota hai.
choice se pucha jata hai ki user aur chahata hai ya nahi.
Agar choice 0, to loop break ho jata hai.*/



