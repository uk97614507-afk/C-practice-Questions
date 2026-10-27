#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:-");
    scanf("%d",&n);
    if((n%5==0)&(n%10==0))
    printf("divisible");
    else
    printf("Not Divisi ble");
    return 0;
}