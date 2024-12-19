// Write a c++ program to display numbers divisible with 7 from 1 to 100(using
// while, for, do.. while)
#include <iostream>

using namespace std;

int main()
{
  cout << "Numbers divisible by 7 from 1 to 100 using while loop are : " << endl
       << endl;

  int num = 1;
  while (num < 100)
  {
    if (num % 7 == 0)
    {
      cout << num << " ";
    }
    num++;
  }

  cout << endl
       << endl
       << "Numbers divisible by 7 from 1 to 100 using do while loop are : " << endl
       << endl;

  num = 1;
  do
  {
    if (num % 7 == 0)
    {
      cout << num << " ";
    }
    num++;
  } while (num < 100);

  cout << endl
       << endl
       << "Numbers divisible by 7 from 1 to 100 using for loop are : " << endl
       << endl;

  for (int i = 1; i < 100; i++)
  {

    if (i % 7 == 0)
    {
      cout << i << " ";
    }
  }
}
