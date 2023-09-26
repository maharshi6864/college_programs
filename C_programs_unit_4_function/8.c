// Write a program to calculate the average of 5 marks using function

#include <stdio.h>

float calAverage(int sub1, int sub2, int sub3, int sub4, int sub5)
{
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    return total / 5;
}

int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float avg;
    printf("Enter Marks of subject 1:");
    scanf("%d", &sub1);
    printf("Enter Marks of subject 2:");
    scanf("%d", &sub2);
    printf("Enter Marks of subject 3:");
    scanf("%d", &sub3);
    printf("Enter Marks of subject 4:");
    scanf("%d", &sub4);
    printf("Enter Marks of subject 5:");
    scanf("%d", &sub5);
    avg = calAverage(sub1, sub2, sub3, sub4, sub5);
    printf("Average of 5 subject marks are:%.2f", avg);
}