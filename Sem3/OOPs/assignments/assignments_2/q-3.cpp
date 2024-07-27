// Design a class Student with private data members (name,Marks) and public member
// functions(setName, setMarks, getName, getMarks) to demonstrate Public and Private
// access specifiers

#include <iostream>

using namespace std;

class Student
{
private:
  string name;
  double marks;

public:
  double getMarks()
  {
    return this->marks;
  }

  string getName()
  {
    return this->name;
  }

  void setMarks(double marks)
  {
    this->marks = marks;
  }

  void setName(string name)
  {
    this->name = name;
  }
};

int main()
{
  Student student;
  // We will get an error while compiling the code as the data has access modifier private.
  //  student.name = "Maharshi Patel";
  // We can change the value of variables using set method.
  student.setName("Maharshi Patel");
}
