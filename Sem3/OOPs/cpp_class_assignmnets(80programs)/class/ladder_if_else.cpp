#include <iostream>
using namespace std;

class LadderIfElse
{
public:
  char ch;
};

int main()
{

  LadderIfElse ladderIfElse;

  cout << "Enter an character : ";
  cin >> ladderIfElse.ch;

  if ((ladderIfElse.ch >= 65 && ladderIfElse.ch <= 90) || (ladderIfElse.ch >= 97 && ladderIfElse.ch <= 122))
  {

    cout << "Entered character is an alphabat." << endl;
  }
  else if (ladderIfElse.ch >= 48 && ladderIfElse.ch <= 57)
  {
    cout << "Entered character is a number." << endl;
  }
  else
  {
    cout << "Entered character is neither a number nor an alphabet." << endl;
  }

  return 0;
}