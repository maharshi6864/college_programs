#include <stdio.h>
int main()
{
    char str[100];
    int lines = 5;
    FILE *fp;
    fp = fopen("writing.txt", "w");
    printf("Enter number of lines: ");
    scanf("%d", &lines);
    gets(str);
    for (int i = 0; i <= lines; i++)
    {
        printf("Enter String: \n");
        gets(str);
        fprintf(fp, "%s \n", str);
    }
    fclose(fp);
}