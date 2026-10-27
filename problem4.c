#include<stdio.h>
int main(){
    float P,R,T,SI;
    printf("Enter a Principle:");
    scanf("%f",&P);
    printf("Enter a Rate of Interest:");
    scanf("%f",&R);
    printf("Enter a Time in year:");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("Calculate the Simple interest is %f\n",SI);
    
return 0;
}