#include <iostream>
using namespace std;

class LadderIfElse
{
public:
  int checkEnteredCharacter(char ch)
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
  char ch;
  cout << "Enter an character : ";
  cin >> ch;

  int ans = ladderIfElse.checkEnteredCharacter(ch);

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