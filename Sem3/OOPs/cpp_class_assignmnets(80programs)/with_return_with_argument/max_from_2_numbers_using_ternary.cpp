#include <iostream>

using namespace std;

class MaxFrom2NumbersUsingTernary{
    public:

int maxFrom2NumbersUsingTernary(int a,int b)
    {
        return (a>b)?1:0;
    }
};

int main()
{
    MaxFrom2NumbersUsingTernary ter;
   int a,b;
    cout<<"enter value of a : ";
    cin>>a;


    cout<<"enter value of b : ";
    cin>>b;

    if(ter.maxFrom2NumbersUsingTernary(a,b))
    {
        cout<<"value of a is greater than b.";
    }else{
        cout<<"value of b is greater than a.";
    }
}
