#include <iostream>

using namespace std;

void swappTheStrings(string &str1, string &str2) // Pass by reference
{
  string temp = str1;
  str1 = str2;
  str2 = temp;
}

int main()
{
  cout << "Enter 1st string: ";
  string str1;
  getline(cin, str1);
  cout << "Enter another string: ";
  string str2;
  getline(cin, str2);

  cout << "String 1 and 2 before swapping it: ";
  cout << "String 1: " << str1 << ", String 2: " << str2 << endl;

  swappTheStrings(str1, str2);

  cout << "String 1 and 2 after swapping it: ";
  cout << "String 1: " << str1 << ", String 2: " << str2 << endl;
}
