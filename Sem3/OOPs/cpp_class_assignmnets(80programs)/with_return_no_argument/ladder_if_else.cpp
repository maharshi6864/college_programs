#include <iostream>
using namespace std;

class LadderIfElse
{
public:
  char ch;
  int checkEnteredCharacter()
  {
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
      return 1;
    }
    else if (ch >= 48 && ch <= 57)
    {
      return 2;
    }
    else
    {
      return 3;
    }
  }
};

int main()
{

  LadderIfElse ladderIfElse;

  cout << "Enter an character : ";
  cin >> ladderIfElse.ch;

  int ans = ladderIfElse.checkEnteredCharacter();

  if (ans == 1)
  {

    cout << "Entered character is an alphabat." << endl;
  }
  else if (ans == 2)
  {
    cout << "Entered character is a number." << endl;
  }
  else
  {
    cout << "Entered character is neither a number nor an alphabet." << endl;
  }

  return 0;
}