#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[20];
    char surname[20];
    char resurname[20];
    char buffer1[50];
    char buffer2[50];

    FILE *file;
    file = fopen("Maharshi.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name : ");
    gets(name);
    printf("Enter yoour surname : ");
    gets(surname);
    fprintf(file, "%s %s\n", name, surname);
    fclose(file);

    file = fopen("Maharshi.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fscanf(file, "%s", buffer1);
    fscanf(file, "%s", buffer2);
    printf("%s %s \n", buffer1, buffer2);
    fclose(file);

    printf("Enter the surname you want to replace with : ");
    gets(buffer2);
    file = fopen("Maharshi.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%s %s", buffer1, buffer2);
    fclose(file);
}