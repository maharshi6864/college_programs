#include <stdio.h>
#include <string.h>

// Define the Student union
union Student
{
  int stu_roll;
  char stu_name[20];
};

int main()
{
  union Student stu;

  printf("Enter student roll number: ");
  scanf("%d", &stu.stu_roll);
  getchar();
  printf("Enter student name: ");
  fgets(stu.stu_name, sizeof(stu.stu_name), stdin);

  printf("\nStudent roll number: %d\n", stu.stu_roll);
  printf("Student name: %s\n", stu.stu_name);

  return 0;
}
