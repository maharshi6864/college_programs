#include <iostream>

using namespace std;

class TernaryOperator{
    public:

int ternaryOperator(int a,int b)
    {
        return (a>b)?1:0;
    }
};

int main()
{
    TernaryOperator ter;
   int a,b;
    cout<<"enter value of a : ";
    cin>>a;


    cout<<"enter value of b : ";
    cin>>b;

    if(ter.ternaryOperator(a,b))
    {
        cout<<"value of a is greater than b.";
    }else{
        cout<<"value of b is greater than a.";
    }
}
