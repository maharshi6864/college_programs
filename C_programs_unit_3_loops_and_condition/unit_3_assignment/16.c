#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to check either its a prime number or not : ");
    scanf("%d", &n);
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }

    if (counter == 2)
    {
        printf("Entered number is prime number !!");
    }
    else
    {
        printf("Entered number is not a prime number !!");
    }
}
