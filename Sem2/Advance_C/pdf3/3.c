#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1;
    fp1 = fopen("Number.txt", "w");
    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp1, "%d \n", i);
    }

    return 0;
}
