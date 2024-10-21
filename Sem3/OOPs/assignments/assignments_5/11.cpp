#include <iostream>

using namespace std;

int main()
{
  string str1;

  cout << "enter string : ";
  cin >> str1;

  try
  {
    bool vowelsInThere = false;
    for (int i = 0; i < str1.length(); i++)
    {
      char currentChar = str1.at(i);
      if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u' || currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U')
      {
        vowelsInThere = true;
        break;
      }
    }
    if (!vowelsInThere)
    {
      throw runtime_error("String does not contain vowels !");
    }

    cout << "Strings are has having vowels.";
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }
}