#include <iostream>

using namespace std;

class Assignmnet{
    public:
    void assignmnent(int a,int b)
    {
        int c=a;
        cout<<"\n\nvalue assigned to is c  : "<<c;
    }

    void plusEqual(int a,int b)
    {
        a+=b;
        cout<<"\n\nvalue of a incremented by value of b is   : "<<a;
    }

    void minusEqual(int a,int b)
    {
        a-=b;
        cout<<"\n\nvalue of a decremented by value of b is   : "<<a;
    }


    void mulEqual(int a,int b)
    {
        a*=b;
        cout<<"\n\nvalue of a multiplied by value of b is   : "<<a;
    }

    void divEqual(int a,int b)
    {
        a/=b;
        cout<<"\n\nvalue of a divided by value of b is   : "<<a;
    }

    void modEqual(int a,int b)
    {
        a%=b;
        cout<<"\n\nvalue of a divided by value of b is   : "<<a;
    }
};

int main()
{
    Assignmnet asign;
    int a,b;

    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;

    asign.assignmnent(a,b);
    asign.plusEqual(a,b);
    asign.minusEqual(a,b);
    asign.mulEqual(a,b);
    asign.divEqual(a,b);
    asign.modEqual(a,b);
}