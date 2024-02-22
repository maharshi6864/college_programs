// Define structure student to store roll no, name, course, gender. Get input from the user and
//  display the same

#include <stdio.h>

struct Student
{
  int roll_number;
  char name[30];
  char gender;
  char course[10];
};

int main()
{
  struct Student student1;

  printf("Enter student rollNumber  : ");
  scanf("%d", &student1.roll_number);
  getchar();
  printf("Enter Student Name : ");
  fgets(student1.name, 30, stdin);
  printf("Enter student gender (m/f)  : ");
  scanf("%c", &student1.gender);
  getchar();
  printf("Enter Student Course Name : ");
  fgets(student1.course, 10, stdin);

  printf("\n\nStudent Details are as follow : \n");
  printf("Student Rollnumber : %d\n", student1.roll_number);
  printf("Student Name : %s", student1.name);
  printf("Student Gender : %c\n", student1.gender);
  printf("Student Course Name : %s", student1.course);
}