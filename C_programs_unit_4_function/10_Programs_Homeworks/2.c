// Arithmatic with arguments and no return (WANR)

#include <stdio.h>

void add(int a, int b)
{
    int c = a + b;
    printf("Addition of two number %d and %d is %d \n", a, b, c);
}

void sub(int a, int b)
{
    int c = b - a;
    printf("Subtraction of two number %d and %d is %d \n", a, b, c);
}
void mul(int a, int b)
{
    int c = a * b;
    printf("Multiplication of two number %d and %d is %d \n", a, b, c);
}
void div(int a, int b)
{
    int c = a / b;
    printf("Div of two number %d and %d is %d \n", a, b, c);
}
void mod(int a, int b)
{
    int c = a % b;
    printf("Modulus of two number %d and %d is %d \n", a, b, c);
}

int main()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    mod(a, b);
    return 0;
}
