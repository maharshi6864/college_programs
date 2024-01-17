#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[100];

    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("test4.txt", "r");
    fp2 = fopen("tanii.txt", "w");
    while (fgets(buffer, 100, fp1) != NULL)
    {
        fputs(buffer, fp2);
    }

    fclose(fp1);
    fclose(fp2);
}