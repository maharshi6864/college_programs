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

    int *num1A = &num1;
    int *num2A = &num2;
    int flag = 0;
    do
    {
        if (flag)
        {
            printf("Invalid Choice \nRe-Enter Your choice :  ");
        }
        printf("Enter \"add\" for addition and \"sub\" for subtraction : ");
        scanf("%s", &choice);
        char *choiceA = choice;
        flag = 1;
        if (!strcmp(choiceA, "add"))
        {
            printf("Addtion of the numbers is %d", *num1A + *num2A);
            flag = 0;
        }
        if (!strcmp(choiceA, "sub"))
        {
            printf("Subtraction of the numbers is %d", *num1A - *num2A);
            flag = 0;
        }

    } while (flag);
}