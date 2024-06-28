// Create a class name Employee Details which will take varibales for example name and salary if the salary is more than 50,000 then cut the tds of rupees 1800 and add the hr allowance of 500 and print the final salary.
#include <iostream>

using namespace std;

class Employee
{

public:
  string name;
  float salary;

public:
  float getSalary()
  {
    if (salary > 50000)
    {
      return salary - 1800 + 500;
    }
    else
    {
      return salary;
    }
  }
};

int main()
{

  Employee emp1;
  cout << "enter employee name : ";
  cin >> emp1.name;
  cout << "enter employee salary : ";
  cin >> emp1.salary;

  cout << "\n\nEmployee Name is = " << emp1.name;
  cout << "\nEmplyee Salary is = " << emp1.getSalary() << "\n(this salary is after the deduction of tds and allowance of hr)";
  return 0;
}