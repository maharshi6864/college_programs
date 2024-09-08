#include <iostream>

using namespace std;

int main()
{
  cout << "enter string to find its length : ";
  string str;
  getline(cin, str);
  cout << "capacity of the string before resizing it to 10 is : " << str.length() << endl;
  str.resize(10);
  cout << "capacity of the string after resizing it to 10 is : " << str.length() << endl;
}