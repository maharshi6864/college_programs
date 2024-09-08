#include <iostream>

using namespace std;

class Student
{
public:
  int studentRollNo;

  string studentName;
};

int main()
{
  int n = 0;
  cout << "Enter Number of student  : ";
  cin >> n;

  Student students[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter student roll no  : ";
    cin >> students[i].studentRollNo;
    getchar();
    cout << "Enter student name  : ";
    getline(cin, students[i].studentName);
  }

  cout << "Student Details" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Student " << i + 1 << " : " << endl;
    cout << "Student Id : " << students[i].studentRollNo << endl;
    cout << "Student Name : " << students[i].studentName << endl;
  }

  return 0;
}