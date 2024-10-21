#include <iostream>
using namespace std;

template <typename t1, typename t2, typename t3>
class Student
{
public:
  t1 rollNumber;
  t2 name;
  t3 enrollmentNumber;

  Student(t1 roll, t2 nm, t3 enroll)
  {
    rollNumber = roll;
    name = nm;
    enrollmentNumber = enroll;
  }

  void showValues()
  {
    cout << "name : " << name << endl;
    cout << "rollNumber : " << rollNumber << endl;
    cout << "enrollmentNumber : " << enrollmentNumber << endl;
  }

  void storeValues(t1 rollNumber, t2 name, t3 enrollmentNumber)
  {
    this->enrollmentNumber = enrollmentNumber;
    this->name = name;
    this->rollNumber = rollNumber;
  }
};
int main()
{
  Student<int, string, int> obj(69, "Maharshi", 181);

  obj.showValues();
}