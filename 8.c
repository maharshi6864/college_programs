// Write a program to calculate the sum of 5 subject and find the percentage

#include <stdio.h>

int main()
{
    float guj, eng, math, coop, san, total;
    float per;

    printf("Enter Marks of Gujarati ");
    scanf("%f", &guj);

    printf("Enter Marks of English ");
    scanf("%f", &eng);

    printf("Enter Marks of Maths ");
    scanf("%f", &math);

    printf("Enter Marks of Computer ");
    scanf("%f", &coop);

    printf("Enter Marks of Sanskrit ");
    scanf("%f", &san);

    total = guj + eng + math + coop + san;
    per = total / 5;

    printf("\nSum of all the subject marks are %.0f\nPercentage of 5 Subjects are %.2f", total, per);

    return 0;
}