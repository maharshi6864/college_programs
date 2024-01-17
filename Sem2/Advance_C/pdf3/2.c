#include <stdio.h>

int main()
{
    int number = 0;
    char dup;
    FILE *fp1;
    fp1 = fopen("test2.txt", "w+");
    printf("Enter number you want to write in file!!");
    scanf("%d", &number);
    fprintf(fp1, "%d", number);
    rewind(fp1);
    fscanf(fp1, "%c", &dup);
    printf("%c", dup);
    fclose(fp1);
}