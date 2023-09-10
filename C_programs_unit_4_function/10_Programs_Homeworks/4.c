// Odd And Even with arguments and no return (WANR)

#include <stdio.h>

void oddAndEven(int n)
{
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
    int no;
    printf("Enter number to check either it is a even or odd:  ");
    scanf("%d", &no);
    oddAndEven(no);
    return 0;
}
