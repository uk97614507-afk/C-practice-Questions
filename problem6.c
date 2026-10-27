
#include <stdio.h>

int main()
{
    int n, i;//variables n=kitne subjects hain
    //i=loop ko  count karne ke liye
    char subject[50][30];// sub. names store karega
    //max.=50sub.,Har sub. ka naam maximum 29 charater tak
    float marks, total = 0, percentage;

    printf("===== STUDENT RESULT SYSTEM =====\n\n");

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {// ye loop har sub. ke liye chlega
        //agar n=5:
        //i=0 i=1 i=2 i=3 i=4  total five times
        printf("\nEnter name of Subject %d: ", i + 1);//sub. name lene ke liye
        scanf(" %[^\n]", subject[i]);//subject[i] main subject ka namm store ho sakta hai
        //[^\n]? Isse space wala naam bhi input ho skta hain

        printf("Enter marks (out of 100): ");
        scanf("%f", &marks);

        total = total + marks;
    }

    percentage = total / n;

    printf("\n\n========== RESULT ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, subject[i]);
    }

    printf("\nTotal Marks Obtained = %.2f", total);
    printf("\nTotal Maximum Marks = %d", n * 100);
    printf("\nPercentage = %.2f%%", percentage);

    if(percentage >= 90)
        printf("\nGrade = A");
    else if(percentage >= 75)
        printf("\nGrade = B");
    else if(percentage >= 60)
        printf("\nGrade = C");
    else if(percentage >= 40)
        printf("\nGrade = D");
    else
        printf("\nGrade = F (Fail)");

    printf("\n============================\n");

    return 0;
}