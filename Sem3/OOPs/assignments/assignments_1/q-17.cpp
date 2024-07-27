// Write a C++ program to print all the prime between 1 to 100

#include <iostream>

using namespace std;

int main()
{
  for (int i = 1; i <= 100; i++)
  {
    int count = 0;
    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        count++;
      }
    }
    if (count == 2)
    {
      cout << "Number " << i << " is a prime number." << endl;
    }
    else
    {
      cout << "Number " << i << " is not a prime number." << endl;
    }
  }
}