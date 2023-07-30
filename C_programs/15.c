// Create a program to find simple interest.

#include <stdio.h>

int main()
{
    int p, m;
    float r;
    printf("Enter principle amount  : ");
    scanf("%d", &p);
    printf("Enter number of months  : ");
    scanf("%d", &m);
    printf("Enter Rate of interest per 12 months : ");
    scanf("%f", &r);
    float y = m / 12;
    float interest = p * r * y / 100;
    printf("Interest on prinnciple %d for %d montths and of rate %.2f is %.2f \n", p, m, r, interest);
    printf("Total of recivable amount after interest is %.2f", ((float)interest + p));
}