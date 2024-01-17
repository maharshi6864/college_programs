#include <stdio.h>

int main()
{
    char cont[100];
    char ch;

    FILE *fp2;
    fp2 = fopen("test.txt", "r");
    while ((ch = fgetc(fp2)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp2);
}