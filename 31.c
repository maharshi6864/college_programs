// Write a program that will use all types of operators.
//  1) Arithmatic Operators
//  2) Relational Opeartors
//  3) Logical Operators
//  4) Assignment Operators
//  5) Conditional Operators
//  6) Special/Misc Operators

#include <stdio.h>

int main()
{
    // Arithmatic Operators
    int a = 10, b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("Arithmatic Operators:\n");
    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %d\n", quotient);
    printf("a %% b = %d\n", remainder);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a > b is %d\n", a > b);
    printf("a >= b is %d\n", a >= b);
    printf("a < b is %d\n", a < b);
    printf("a <= b is %d\n", a <= b);
    printf("a == b is %d\n", a == b);
    printf("a != b is %d\n", a != b);

    // Logical Operators
    int x = 1, y = 0;
    printf("\nLogical Operators:\n");
    printf("x && y is %d\n", x && y);
    printf("x || y is %d\n", x || y);
    printf("!x is %d\n", !x);
    printf("!y is %d\n", !y);

    // Assignment Operators
    int c = 8;
    printf("\nAssignment Operators:\n");
    c += 3;
    printf("c += 3 (c = c + 3) is %d\n", c);
    c -= 2;
    printf("c -= 2 (c = c - 2) is %d\n", c);
    c *= 5;
    printf("c *= 5 (c = c * 5) is %d\n", c);
    c /= 2;
    printf("c /= 10 (c = c / 10) is %d\n", c);
    c %= 3;
    printf("c %%= 3 (c = c %% 3) is %d\n", c);

    // Conditional Operators (Ternary Operator)
    int p = 12, q = 10;
    int max = (p > q) ? p : q;
    int min = (p < q) ? p : q;

    printf("\nConditional Operators:\n");
    printf("The maximum of p and q is: %d\n", max);
    printf("The minimum of p and q is: %d\n", min);

    // Special/Misc Operators
    printf("\nSpecial/Misc Operators:\n");
    int r = 5;
    int *ptr = &r;
    printf("Value of r: %d\n", r);
    printf("Address of r: %p\n", &r);
    printf("Value of r using pointer: %d\n", *ptr);
    printf("Address of r using pointer: %p\n", ptr);

    return 0;
}
