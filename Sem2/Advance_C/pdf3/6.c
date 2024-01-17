#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buffer[100];
    char file_name[10];
    FILE *fp1;
    printf("Enter file name: ");
    gets(file_name);
    fp1 = fopen(file_name, "w");
    printf("Enter Data into file : ");
    fgets(buffer, 100, stdin);
    fputs(buffer, fp1);
    fclose(fp1);
}