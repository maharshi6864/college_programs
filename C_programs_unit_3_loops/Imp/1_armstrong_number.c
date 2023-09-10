#include <stdio.h>

int main()
{

    int number;
    printf("Enter Number toi check either its an armstrong number or not :  ");
    scanf("%d", &number);
    int temp = number;
    int n;
    int sum;
    while (temp > 0)
    {
        n = temp % 10;
        sum = sum + (n * n * n * n); // this is about how many digits are there in a integer
        temp = temp / 10;
        // sum = n;
    }
    printf("%d", sum);
}