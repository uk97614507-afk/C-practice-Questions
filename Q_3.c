//Greatest two no. find
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
     scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is greatest",a);
    else if(b>a)
    printf("%d is greatest",b);
    else
    printf("Both are equal");
    return 0;

}