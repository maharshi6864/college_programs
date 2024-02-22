// Define structure salary to store emp name, basic salary, hra, da, total salary. Get basic salary from
//  user. Calculate hra as 25% and da as 10% of salary and total salary = basic+hra+da and display
//  the same

#include <stdio.h>

struct Salary
{
  char emp_name[30];
  float basic_salary;
  float da;
  float hra;
  float total_salary;
};

int main()
{
  struct Salary employee1;

  printf("Enter Employee Name : ");
  fgets(employee1.emp_name, 30, stdin);
  printf("Enter Employee Basic Salary  : ");
  scanf("%f", &employee1.basic_salary);

  employee1.da = employee1.basic_salary * 10.0 / 100.0;
  employee1.hra = employee1.basic_salary * 25.0 / 100.0;
  employee1.total_salary = employee1.basic_salary + employee1.da + employee1.hra;

  printf("\n\nEmployee name is : %s", employee1.emp_name);
  printf("Employee Basic Salary : %.2f\n", employee1.basic_salary);
  printf("Employee 10 percent da : %.2f\n", employee1.da);
  printf("Employee 25 percent hra : %.2f\n", employee1.hra);
  printf("Employee Total salary : %.2f\n", employee1.total_salary);
}