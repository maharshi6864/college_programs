#include <iostream>

using namespace std;

class Student
{
public:
  int no;
  string name;
  string address;
};

int main()
{
  int numberOfStudent;
  cout << "Enter number of student : ";
  cin >> numberOfStudent;

  Student students[numberOfStudent];

  for (int i = 0; i < numberOfStudent; i++)
  {
    cout << "Enter no for student " << i + 1 << " : ";
    cin >> students[i].no;
    getchar();
    cout << "Enter name for student " << i + 1 << " : ";
    getline(cin, students[i].name);
    cout << "Enter address for student " << i + 1 << " : ";
    getline(cin, students[i].address);
  }

  for (int i = 0; i < numberOfStudent; i++)
  {
    cout << "student no : " << students[i].no << endl;
    cout << "        name : " << students[i].name << endl;
    cout << "        address : " << students[i].address << endl;
    cout << endl;
  }

  return 0;
}