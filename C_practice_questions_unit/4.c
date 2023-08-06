#include <stdio.h>

int main()
{
    int employee_id, hrs, salary;
    printf("Enter Employee id :  ");
    scanf("%d", &employee_id);
    printf("Enter number of hrs of working :");
    scanf("%d", &hrs);
    printf("Enter salary per hrs of working :");
    scanf("%d", &salary);
    printf("employee salary is : %.2d", salary * hrs);
}