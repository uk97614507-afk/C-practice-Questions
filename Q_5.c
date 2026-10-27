//Check the condition that for meligible .for vote
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
    printf("You are eligible for vote:");
    else
    printf("You are not for eligible for vote:");
    return 0;
}