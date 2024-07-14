#include <iostream>

using namespace std;

class Assignmnet
{
public:
    int assignmnent(int a)
    {
        int c = a;
        return c;
    }

    int plusEqual(int a, int b)
    {
        a += b;
        return a;
    }

    int minusEqual(int a, int b)w
    {
        a -= b;
        return a;
    }

    int mulEqual(int a, int b)
    {
        a *= b;
        return a;
    }

    int divEqual(int a, int b)
    {
        a /= b;
        return a;
    }

    int modEqual(int a, int b)
    {
        a %= b;
        return a;
    }
};

int main()
{
    Assignmnet asign;
    int a, b;
    cout << "enter value of a:";
    cin >> a;
    cout << "enter value of b:";
    cin >> b;

    int c = asign.assignmnent(a);
    cout << "value assigned to is c  : " << c;
    cout << "value of a incremented by value of b is   : " << asign.plusEqual(a, b);
    cout << "value of a decremented by value of b is   : " << asign.minusEqual(a, b);
    cout << "value of a multiplied by value of b is   : " << asign.mulEqual(a, b);
    cout << "value of a divided by value of b is   : " << asign.divEqual(a, b);
    cout << "value of a divided by value of b is   : " << asign.modEqual(a, b);
}