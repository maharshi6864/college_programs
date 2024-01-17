#include <stdio.h>
int main()
{
    char cont[100];
    char ch;
    FILE *fp1;
    fp1 = fopen("tani.txt", "r");

    while (fscanf(fp1, "%c", &ch) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp1);
}