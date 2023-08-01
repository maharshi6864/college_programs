// Question 24
//  Write a program to take student name from a user and print it on a screen

#include <stdio.h>

int main()
{
    char studentName[100];

    printf("Enter the student's name: ");
    // The below two lines wont include spaces as character in input.
    // scanf("%s", studentName);
    // printf("Student's name: %s\n", studentName);
    // But the below lines will consider spaces as character in input and will give output according to it.
    gets(studentName);
    puts(studentName);

    return 0;
}