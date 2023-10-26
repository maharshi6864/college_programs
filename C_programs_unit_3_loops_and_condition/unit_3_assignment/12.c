#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to print its reverse : ");
    scanf("%d", &n);
    int temp = n;
    int reverse = 0, r = 0;
    while (temp > 0)
    {
        r = temp % 10;
        temp = temp / 10;
        reverse = r + (reverse * 10);
    }
    printf("%d", reverse);
}
