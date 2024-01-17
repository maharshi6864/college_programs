#include <stdio.h>

int main()
{
    char buffer[100], dup[100];
    FILE *fp1;
    fp1 = fopen("12.txt", "w+");
    puts("enter a String to write in File : ");
    gets(buffer);
    fputs(buffer, fp1);
    rewind(fp1);
    printf("Out Put from file 11.txt : \"%s\"", fgets(dup, 100, fp1));
    fclose(fp1);
}
