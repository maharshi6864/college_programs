// Odd And Even with no arguments and no return (NANR)

#include <stdio.h>

void oddAndEven()
{

    int n;
    printf("Enter number to check either it is even or odd:  ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    oddAndEven();
    return 0;
}
