// Write a C++ to create a class Subject to print the detail of Subject Code, Subject Name using
// objects

#include <iostream>

using namespace std;

class Subject
{
public:
  int code;
  string name;
  Subject(int code, string name)
  {
    this->code = code;
    this->name = name;
  }
};

int main()
{
  Subject subject1(101, "OOPS"), subject2(102, "FOS");
  cout << "Subject Details" << endl;
  cout << "subject code : " << subject1.code << endl;
  cout << "subject name : " << subject1.name << endl;
  cout << "subject code : " << subject2.code << endl;
  cout << "subject name : " << subject2.name << endl;
}