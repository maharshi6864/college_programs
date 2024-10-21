#include <iostream>

using namespace std;

int main()
{
  int age;

  cout << "enter age : ";
  cin >> age;

  try
  {
    if (age < 18)
    {
      throw runtime_error("Not eligible for driving license !");
    }

    cout << "Eligible for driving license.";
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }

  return 0;
}