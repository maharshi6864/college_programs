#include <stdio.h>

struct Salary
{
  char emp_name[30];
  float basic_salary;
  float da;
  float hra;
  float total_salary;
};

struct Salary calSalary(struct Salary s1)
{
  return s1;
}

int main()
{
  struct Salary emp1;
  printf("Enter Employee Name : ");
  scanf("%s", emp1.emp_name);
  printf("Enter basic salary : ");
  scanf("%f", &emp1.basic_salary);
}