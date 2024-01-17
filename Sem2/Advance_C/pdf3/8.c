#include <stdio.h>

int main()
{
    char cont[100];
    char ch;
    int count = 0;

    FILE *fp2;
    fp2 = fopen("test4.txt", "r");
    while ((ch = fgetc(fp2)) != EOF)
    {
        count++;
    }
    printf("There are total %d characters in test4.txt", count);
    fclose(fp2);
}