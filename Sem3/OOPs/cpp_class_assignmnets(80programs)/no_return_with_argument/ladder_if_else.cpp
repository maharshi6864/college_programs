#include <iostream>
using namespace std;

class LadderIfElse
{
public:
  void checkEnteredCharacter(char ch)
  {
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {

      cout << "Entered character is an alphabat." << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
      cout << "Entered character is a number." << endl;
    }
    else
    {
      cout << "Entered character is neither a number nor an alphabet." << endl;
    }
  }
};

int main()
{

  LadderIfElse ladderIfElse;
  char ch;
  cout << "Enter an character : ";
  cin >> ch;

  ladderIfElse.checkEnteredCharacter(ch);

  return 0;
}