// Define structure employee to store emp id, emp name, emp department, emp designation, get the
//  input from user and display the same

#include <stdio.h>

struct Employee
{
  int emp_id;
  char emp_name[30];
  char emp_dept[30];
  char emp_desi[30];
};

int main()
{
  struct Employee employee1;

  printf("Enter employee Id  : ");
  scanf("%d", &employee1.emp_id);
  getchar();
  printf("Enter Employee Name : ");
  fgets(employee1.emp_name, 30, stdin);
  printf("Enter Employee Department Name : ");
  fgets(employee1.emp_dept, 30, stdin);
  printf("Enter Employee Designation Name : ");
  fgets(employee1.emp_desi, 30, stdin);

  printf("\n\nEmployee Details are as follow : \n");
  printf("Employee Id : %d\n", employee1.emp_id);
  printf("Employee Name : %s", employee1.emp_name);
  printf("Employee Department : %s", employee1.emp_dept);
  printf("Employee Designation : %s", employee1.emp_desi);
}