// calculate the grade and marks for student
#include<stdio.h>
int main(){
    float a,b,c,d,e;
    float total,percentage;
    printf("Enter the marks of 5 subjects:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("Calculate the total marks is %.2f\n",total=a+b+c+d+e);
    printf("Calculate the percentage is %.2f\n",percentage=total/5);
    if(percentage>=90)
    printf("Grade A");
    else if(percentage>=80)
    printf("Grade B");
    else if(percentage>=70)
    printf("Grade C");
    else if(percentage>=60)
    printf("Grade D");
    else
    printf("Fail");
    return 0;

}