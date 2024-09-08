#include <iostream>

using namespace std;

int main()
{
  cout << "enter 1st string : ";
  string str1;
  getline(cin, str1);
  cout << "enter another string : ";
  string str2;
  getline(cin, str2);
  str1.append(str2);
  cout << str1;
}