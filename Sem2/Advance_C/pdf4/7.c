//  WAP to take student’s personal information as rollno(int), gender(char:
// M or F),makrs(float). Display it using pointers.

#include <stdio.h>

int main()
{
  int roll_no;
  char gender;
  float marks;

  printf("Enter student's roll number: ");
  scanf("%d", &roll_no);

  printf("Enter gender of the student (M/F): ");
  scanf(" %c", &gender);

  printf("Enter marks of the student: ");
  scanf("%f", &marks);

  int *roll_no_ptr = &roll_no;
  char *gender_ptr = &gender;
  float *marks_ptr = &marks;

  printf("Student roll number is %d, gender is %c, and marks are %.2f.\n", *roll_no_ptr, *gender_ptr, *marks_ptr);

  return 0;
}
