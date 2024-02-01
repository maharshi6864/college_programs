// WAP to Calculate Average Using Pointers.

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter value for number 1 : ");
    scanf("%d", &num1);
    printf("Enter value for number 2 : ");
    scanf("%d", &num2);
    printf("Enter value for number 3 : ");
    scanf("%d", &num3);
    printf("Enter value for number 4 : ");
    scanf("%d", &num4);
    int *num1A = &num1;
    int *num2A = &num2;
    int *num3A = &num3;
    int *num4A = &num4;
    float avg = (float)(*num1A + *num2A + *num3A + *num4A) / 4.0;
    float *avgA = &avg;
    printf("Average of the 4 numbers is : %.2f", *avgA);
}