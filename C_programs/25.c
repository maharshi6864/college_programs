#include <stdio.h>

int main() {
    int asciiValue;

    printf("Enter an ASCII value (integer): ");
    scanf("%d", &asciiValue);

    // Explicitly casting the integer ASCII value to a character will give the corresponding character
    printf("Character for ASCII value %d is '%c'\n", asciiValue, (char)asciiValue);

    return 0;
}