#include <iostream>

using namespace std;

int main()
{
  cout << "enter string to find its length : ";
  string str;
  getline(cin, str);
  cout << "capacity of the string is : " << str.capacity();
}