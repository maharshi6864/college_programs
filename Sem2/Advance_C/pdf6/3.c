// Define structure course to store course no, course name, course description. Get input from user
//  and display the same

#include <stdio.h>

struct Course
{
  int course_no;
  char course_name[30];
  char course_des[40];
};

int main()
{
  struct Course course1;

  printf("Enter Course Number  : ");
  scanf("%d", &course1.course_no);
  getchar();
  printf("Enter Course Name : ");
  fgets(course1.course_name, 30, stdin);
  printf("Enter Course Description : ");
  fgets(course1.course_des, 30, stdin);

  printf("\n\nCourse Details are as follow : \n");
  printf("Course Number : %d\n", course1.course_no);
  printf("Course Name : %s", course1.course_name);
  printf("Course Description : %s", course1.course_des);
}