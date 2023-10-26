#include <stdio.h>

int main()
{

    int number;
    printf("Enter Number toi check either its an armstrong number or not :  ");
    scanf("%d", &number);
    int temp = number;
    int n;
    int sum = 0;
    while (temp > 0)
    {
        n = temp % 10;
        sum = (sum * 10) + n;
        temp = temp / 10;
        // sum = n;
    }
    printf("%d", sum);
}