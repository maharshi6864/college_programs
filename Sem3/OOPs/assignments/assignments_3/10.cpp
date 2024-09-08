#include <iostream>

using namespace std;

class Employee
{
public:
  int employeeNumber;

  string employeeName;

  double employeeSalary;
};

int main()
{
  int n = 0;
  cout << "Enter Number of employee  : ";
  cin >> n;

  Employee employees[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter employee id  : ";
    cin >> employees[i].employeeNumber;
    getchar();
    cout << "Enter employee name  : ";
    getline(cin, employees[i].employeeName);
    cout << "Enter employee salary  : ";
    cin >> employees[i].employeeSalary;
  }
  cout << "Employee Details" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Employee " << i + 1 << " : " << endl;
    cout << "Employee Id : " << employees[i].employeeNumber << endl;
    cout << "Employee Name : " << employees[i].employeeName << endl;
    cout << "Employee Salary : " << employees[i].employeeSalary << endl;
  }

  return 0;
}