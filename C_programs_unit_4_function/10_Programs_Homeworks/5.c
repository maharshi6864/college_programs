// Prime Number with no arguments and no return (NANR)

#include <stdio.h>

void primeNumber()
{
    int no = 10;
    printf("Enter number to check either it is a prime or not:  ");
    scanf("%d", &no);
    int nu = no;

    int j;
    int counter = 0;
    for (j = 1; j <= no; j++)
    {
        if (no % j == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        printf("%d is a prime number \n", no);
    }
    else
    {
        printf("%d is not a prime number \n", no);
    }
}

int main()
{
    primeNumber();
    return 0;
}