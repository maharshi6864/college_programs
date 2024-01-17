#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char name[] = "YourName";
    char surname[] = "YourSurname";
    char newSurname[] = "NewSurname";
    char buffer[255];

    // Create a file and write your name and surname into it
    file = fopen("YourName.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%s %s\n", name, surname);
    fclose(file);

    // Open the file and read the name and surname
    file = fopen("YourName.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fscanf(file, "%s", buffer); // Read the name
    fscanf(file, "%s", buffer); // Read the surname
    fclose(file);

    // Check if the surname matches your surname
    if (strcmp(buffer, surname) == 0) {
        // Change the surname
        file = fopen("YourName.txt", "w");
        if (file == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
        fprintf(file, "%s %s\n", name, newSurname);
        fclose(file);
    }

    printf("Surname changed successfully.\n");

    return 0;
}
