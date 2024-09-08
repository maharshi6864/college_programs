#include <iostream>

using namespace std;

int main()
{
  cout << "enter string to find its length : ";
  string str;
  getline(cin, str);
  cout << "length of the string is : " << str.length();
}