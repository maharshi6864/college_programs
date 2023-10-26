#include <stdio.h>
int main()
{
    int n, pow;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter the number's power : ");
    scanf("%d", &pow);
    int no = 1;
    for (int i = 1; i <= pow; i++)
    {
        no = no * n;
    }

    printf("%d", no);
}
