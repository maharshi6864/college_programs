// Write a program to take student name from a user and print it on a screen

#include <stdio.h>

int main()
{
    char studentName[100];

    printf("Enter the student's name: ");
    scanf("%s", studentName);

    printf("Student's name: %s\n", studentName);

    return 0;
}