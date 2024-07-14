#include <iostream>

using namespace std;

class Assignmnet{
    public:
    int a,b;
int assignmnent()
    {
        int c=a;
        return c;
    }

    int plusEqual()
    {
        a+=b;
       return a;
    }

    int minusEqual()
    {
        a-=b;
        return a;
    }


    int mulEqual()
    {
        a*=b;
       return a;
    }

    int divEqual()
    {
        a/=b;
        return a;
    }

    int modEqual()
    {
        a%=b;
       return a;
    }
};

int main()
{
    Assignmnet asign;

    cout<<"enter value of a:";
    cin>>asign.a;
    cout<<"enter value of b:";
    cin>>asign.b;

    int c=asign.assignmnent();
    cout<<"\n\nvalue assigned to is c  : "<<c;
    cout<<"\n\nvalue of a incremented by value of b is   : "<<asign.plusEqual();
    cout<<"\n\nvalue of a decremented by value of b is   : "<<asign.minusEqual();
    cout<<"\n\nvalue of a multiplied by value of b is   : "<<asign.mulEqual();
    cout<<"\n\nvalue of a divided by value of b is   : "<<asign.divEqual();
    cout<<"\n\nvalue of a divided by value of b is   : "<<asign.modEqual();
}