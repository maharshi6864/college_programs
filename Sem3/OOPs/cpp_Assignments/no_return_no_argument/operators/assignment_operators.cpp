#include <iostream>

using namespace std;

class Assignmnet
{
public:
    int a, b;
};

int main()
{
    Assignmnet asign;

    cout << "enter value of a:";
    cin >> asign.a;
    cout << "enter value of b:";
    cin >> asign.b;

    int c = asign.a;
    cout << "\n\nvalue assigned to is c : " << c;

    asign.a += asign.b;
    cout << "\n\nvalue of a incremented by value of b is  : " << asign.a;

    asign.a -= asign.b;
    cout << "\n\nvalue of a decremented by value of b is  : " << asign.a;

    asign.a *= asign.b;
    cout << "\n\nvalue of a multiplied by value of b is  : " << asign.a;

    asign.a /= asign.b;
    cout << "\n\nvalue of a divided by value of b is  : " << asign.a;

    asign.a %= asign.b;
    cout << "\n\nvalue of a divided by value of b is  : " << asign.a;
}