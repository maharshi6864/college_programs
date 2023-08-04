#include <stdio.h>

int main()
{

    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    double x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    // Expressions
    int r1 = a + c;
    printf("Result 1 : %d\n", r1);

    int r2 = x + c;
    printf("Result 2 : %d\n", r2);

    double r3 = ((double)dx + (double)x);
    printf("Result 3 : %lf\n", r3);

    int r4 = (int)dx + ax;
    printf("Result 4 : %d\n", r4);

    int r5 = a + x;
    printf("Result 5 : %d\n", r5);

    int r6 = s + b;
    printf("Result 6 : %d\n", r6);

    int r7 = ax + b;
    printf("Result 7 : %d\n", r7);

    int r8 = s + c;
    printf("Result 8 : %d\n", r8);

    int r9 = ax + c;
    printf("Result 9 : %d\n", r9);

    int r10 = ax + ux;
    printf("Result 10 : %d\n", r10);
}