// Arithmatic with no arguments and no return (NANR)

#include <stdio.h>

void add()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    int c = a + b;
    printf("Addition of two number %d and %d is %d \n", a, b, c);
}

void sub()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    int c = b - a;
    printf("Subtraction of two number %d and %d is %d \n", a, b, c);
}
void mul()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    int c = a * b;
    printf("Multiplication of two number %d and %d is %d \n", a, b, c);
}
void div()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    int c = a / b;
    printf("Div of two number %d and %d is %d \n", a, b, c);
}
void mod()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    int c = a % b;
    printf("Modulus of two number %d and %d is %d \n", a, b, c);
}

int main()
{
    add();
    sub();
    mul();
    div();
    mod();
    return 0;
}
