#include <stdio.h>

int main()
{

    int no;
    printf("Enter number for its factorial:  ");
    scanf("%d", &no);
    int i, fact = 1;
    ;
    for (i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of given number %d is %d", no, fact);
    return 0;
}