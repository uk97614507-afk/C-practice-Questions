#include<stdio.h>
int main(){
    float P,R,T,Amount,CI;
    printf("Enter a Principle:-");
    scanf("%f",&P);
    printf("Enter a Rate of Interest:-");
    scanf("%f",&R);
    printf("Enter a Time in year:-");
    scanf("%f",&T);
    Amount  = P*pow((1+R/100),T);
    CI=P-Amount;
    printf("Compound interest=%f\n",CI);
    printf("Total Amount = %f\n", Amount);
    return 0;
}