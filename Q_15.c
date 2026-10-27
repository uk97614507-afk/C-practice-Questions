//Check the Vowel and Consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
        printf("This is Vowel");
        break;
        default:
        printf("This is Consonant");
        
    }
    return 0 ;
}