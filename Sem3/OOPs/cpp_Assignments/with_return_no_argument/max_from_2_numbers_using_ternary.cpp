#include <iostream>

using namespace std;

class MaxFrom2NumbersUsingTernary{
    public:
   int a,b ;
int maxFrom2NumbersUsingTernary()
    {
        return (a>b)?1:0;
    }
};

int main()
{
    MaxFrom2NumbersUsingTernary ter;
   
    cout<<"enter value of a : ";
    cin>>ter.a;


    cout<<"enter value of b : ";
    cin>>ter.b;

    if(ter.maxFrom2NumbersUsingTernary())
    {
        cout<<"value of a is greater than b.";
    }else{
        cout<<"value of b is greater than a.";
    }
}
