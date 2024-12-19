#include <iostream>
#include <exception>
#include <string>

using namespace std;

class Student
{
  string name;
  string lastname;
};

int main()
{
  string name = "Vansh";
  string lastname = "Shah";
  name.swap(lastname);
  cout << name << endl;

  return 0;
}
mkdir /opt/gradle
unzip -d /opt/gradle gradle-8.11.1-bin.zip
ls /opt/gradle/gradle-8.11.1