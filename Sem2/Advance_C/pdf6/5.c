// Define structure student to store roll no, name, course, gender. Get input from the user and
//  display the same for 5 students.

#include <stdio.h>

struct Student
{
  char stu_name[30];
  int roll_number;
  char course_name[10];
  char gender;
};

int main()
{
  int number_of_student = 0;
  printf("Enter number of student : ");
  scanf("%d", &number_of_student);

  struct Student student[number_of_student];

  for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++)
  {

    printf("Enter Student Roll Number : ");
    scanf("%d", &student[i].roll_number);
    getchar();
    printf("Enter Student Name : ");
    fgets(student[i].stu_name, 30, stdin);
    printf("Enter Student Gender : ");
    scanf("%c", &student[i].gender);
    getchar();
    printf("Enter Student Course Name : ");
    fgets(student[i].course_name, 10, stdin);
  }

  printf("\n\nStudent Information as follow \n\n");
  for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++)
  {
    printf("\n\nStudent name is : %s", student[i].stu_name);
    printf("Student Basic Salary : %d\n", student[i].roll_number);
    printf("Student Course name is : %s", student[i].course_name);
    printf("Student gender : %c\n", student[i].gender);
  }
}