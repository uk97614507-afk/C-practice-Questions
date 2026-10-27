//print the months name with number
#include<stdio.h>
int main(){
    int n;
    printf("Enter number(1-12):");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Jan");
        break;
        case 2:
        printf("feb");
        break;
        case 3:
        printf("mar");
        break;
        case 4:
        printf("apr");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("jun");
        break;
        case 7:
        printf("jul");
        break;
        case 8:
        printf("Aug");
        break;
        case 9:
        printf("Sep");
        break;
        case 10:
        printf("oct");
        break;
        case 11:
        printf("nov");
        break;
        case 12:
        printf("dec");
        default:
        printf("invalid case");

    }
    return 0;
}