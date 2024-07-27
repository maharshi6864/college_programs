// . Create a class employee with name, salary, age as member, use get_data() and show()
// functions. Display details of 3 manager employees.

#include <iostream>

using namespace std;

class Employee
{
private:
  string name;
  double salary;
  int age;

public:
  Employee(string name, int age, double salary)
  {
    this->name = name;
    this->age = age;
    this->salary = salary;
  }

  void getDate()
  {
    cout << "Employee Name: " << this->name << endl;
    cout << "Employee age: " << this->age << endl;
    cout << "Employee Salary: " << this->salary << endl;
    cout << endl;
  }

  void show()
  {
    cout << "Employee Name: " << this->name << endl;
    cout << "Employee age: " << this->age << endl;
    cout << "Employee Salary: " << this->salary << endl;
    cout << endl;
  }
};

int main()
{
  Employee emp1("Maharshi", 19, 90000);
  Employee emp2("Aarsh", 18, 190000);
  Employee emp3("Rahul", 20, 190000);
  emp1.getDate();
  emp2.getDate();
  emp3.getDate();
}