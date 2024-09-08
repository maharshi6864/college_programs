#include <iostream>

using namespace std;

int main()
{
  string str = "Hello world";
  int lenOfString = str.length();
  for (int i = 0; i < lenOfString; i++)
  {
    cout << str.at(i) << " ";
  }
}