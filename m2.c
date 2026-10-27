#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    float percentage,total;
    printf("Enter the marks of 5 subject:-");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("Calculate the total marks = %f\n",total=a+b+c+d+e);
    printf("Calculate the percentage =%f\n",percentage=total/5);
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