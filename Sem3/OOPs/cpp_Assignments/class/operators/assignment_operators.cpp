#include <iostream>

using namespace std;

class Assignmnet
{
public:
    int a, b;
    void assignmnent()
    {
        int c = a;
        cout << "\n\nvalue assigned to is c : " << c;
    }

    void plusEqual()
    {
        a += b;
        cout << "\n\nvalue of a incremented by value of b is  : " << a;
    }

    void minusEqual()
    {
        a -= b;
        cout << "\n\nvalue of a decremented by value of b is  : " << a;
    }

    void mulEqual()
    {
        a *= b;
        cout << "\n\nvalue of a multiplied by value of b is  : " << a;
    }

    void divEqual()
    {
        a /= b;
        cout << "\n\nvalue of a divided by value of b is  : " << a;
    }

    void modEqual()
    {
        a %= b;
        cout << "\n\nvalue of a divided by value of b is  : " << a;
    }
};

int main()
{
    Assignmnet asign;

    cout << "enter value of a:";
    cin >> asign.a;
    cout << "enter value of b:";
    cin >> asign.b;

    asign.assignmnent();
    asign.plusEqual();
    asign.minusEqual();
    asign.mulEqual();
    asign.divEqual();
    asign.modEqual();
}