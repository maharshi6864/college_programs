// WAP to Calculate Average Using Pointers.

#include <stdio.h>
#include <string.h>
int main()
{
    int num1, num2;
    char choice[10];
    printf("Enter value for number 1 : ");
    scanf("%d", &num1);
    printf("Enter value for number 2 : ");
    scanf("%d", &num2);

    void *num1A = &num1;
    void *num2A = &num2;
    int flag = 0;
    do
    {
        if (flag)
        {
            printf("Invalid Choice \nRe-Enter Your choice ");
        }
        printf("Enter \"div\" for division and \"mul\" for multiplication : ");
        scanf("%s", &choice);
        char *choiceA = choice;
        flag = 1;
        if (!strcmp(choiceA, "div"))
        {
            printf("Division of the numbers is %.2f", *(float *)(num1A) / *(float *)(num2A));
            flag = 0;
        }
        if (!strcmp(choiceA, "mul"))
        {
            printf("Multiplication of the numbers is %d", *(int *)num1A * *(int *)num2A);
            flag = 0;
        }

    } while (flag);
}