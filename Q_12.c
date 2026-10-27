//Admission Eligibility
//age>=18
//percentage>=50
#include<stdio.h>
int main(){
    int Age;
    float Percentage;
    printf("Enter the Age:");
    scanf("%d",&Age);
    printf("Enter the Percentage:");
    scanf("%f",&Percentage);
    if(Age>=18 && Percentage>=50)
    printf("Eligible for Admission");
    else
    printf("Not Eligible for Admission");
    return 0;

}