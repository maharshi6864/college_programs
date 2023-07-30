// Create a program to convert temperature from celsius to fahrenheit and fahrenheit
// to celsius.

#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter value of fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32.0) * 5.0 / 9.0;
    printf("\nValue of celsius is %.2f of fahrenheit %.2f\n", c, f);
    printf("Enter value of celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32.0;
    printf("\nValue of  Fahrenheit is %.2f of celsius %.2f", f, c);
}