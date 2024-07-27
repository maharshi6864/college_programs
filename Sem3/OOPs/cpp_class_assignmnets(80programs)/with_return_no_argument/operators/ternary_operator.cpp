#include <iostream>

using namespace std;

class TernaryOperator{
    public:
   int a,b ;
int ternaryOperator()
    {
        return (a>b)?1:0;
    }
};

int main()
{
    TernaryOperator ter;
   
    cout<<"enter value of a : ";
    cin>>ter.a;


    cout<<"enter value of b : ";
    cin>>ter.b;

    if(ter.ternaryOperator())
    {
        cout<<"value of a is greater than b.";
    }else{
        cout<<"value of b is greater than a.";
    }
}
