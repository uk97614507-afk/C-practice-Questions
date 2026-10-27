#include<stdio.h>
int main(){
    int year;
    printf("Enter a leap year:-");
    scanf("%d",&year);
    if(year%4==0)
    printf("This is a leap year");
    else if(year%100==0)
    printf("This is not a leap year");
    else if(year%400==0)
    printf("This is a leap year");
    else
    printf("Not a leap year");
    return 0;
}