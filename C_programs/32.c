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
    int a = 10, b = 20;

    printf("Enter the value of a :  ");
    scanf("%d", &a);

    printf("Enter the value of b :  ");
    scanf("%d", &b);

    // Arithmatic with variables
    printf("Arithmatic with variables=============================\n");
    int c = a + b;
    printf("sum of a and b will be :  %d \n", c);
    c = a - b;
    printf("sub of a and b will be :  %d \n", c);
    c = a * b;
    printf("mul of a and b will be :  %d \n", c);
    c = a / b;
    printf("divison of a and b will be :  %d \n", c);
    c = a % b;
    printf("modulo of a and b will be :  %d \n", c);

    // Arithmatic without variables
    printf("Arithmatic without variables============================= \n");
    printf("sum of a and b will be :  %d \n", a + b);
    printf("sub of a and b will be :  %d \n", a - b);
    printf("mul of a and b will be :  %d \n", a * b);
    printf("divison of a and b will be :  %d \n", a / b);
    printf("modulo of a and b will be :  %d \n", a % b);

    // Relational with variables
    printf("Relational with variables=============================\n");
    c = a > b;
    printf("a is greater than b  :  %d \n", c);
    c = a < b;
    printf("a is smaller to b:  %d \n", c);
    c = a <= b;
    printf("a is smaller than b or equal to b:  %d \n", c);
    c = a >= b;
    printf("a is greater than or equal to b:  %d \n", c);
    c = a == b;
    printf("a and b are equal  :  %d \n", c);
    c = a != b;
    printf("a and b are not equal:  %d \n", c);

    // Relational without variables
    printf("Relational without variables============================= \n");
    printf("a is greater than b  :  %d \n", a > b);
    printf("a is smaller to b:  %d \n", a < b);
    printf("a is smaller than b or equal to b:  %d \n", a <= b);
    printf("a is greater than or equal to b:  %d \n", a >= b);
    printf("a and b are equal  :  %d \n", a == b);
    printf("a and b are not equal:  %d \n", a != b);

    // Logical with variables
    printf("Logical without variables============================= \n");
    c = ((a > b) && (a == b));
    printf("a is greater than and equal to b:  %d \n", c);
    c = ((a > b) || (a == b));
    printf("a is greater than or equal to b:  %d \n", c);
    c = !((a > b) || (a == b));
    printf("a is not greater than or equal to b:  %d \n", c);
    c = !((a > b) || (a == b));
    printf("a is not greater than or equal to b:  %d \n", c);

    // Logical without variables
    printf("Logical without variables============================= \n");
    printf("a is greater than and equal to b:  %d \n", ((a > b) && (a == b)));
    printf("a is greater than or equal to b:  %d \n", ((a > b) || (a == b)));
    printf("a is not greater than or equal to b:  %d \n", !((a > b) && (a == b)));
    printf("a is not greater than or equal to b:  %d \n", !((a > b) || (a == b)));

    // Assignment with variables
    printf("Assignment with variables=============================\n");
    a += b;
    printf("sum of a and b will be :  %d \n", a);
    a -= b;
    printf("sub of a and b will be :  %d \n", a);
    a *= b;
    printf("mul of a and b will be :  %d \n", a);
    a /= b;
    printf("divison of a and b will be :  %d \n", a);
    a %= b;
    printf("modulo of a and b will be :  %d \n", a);
}