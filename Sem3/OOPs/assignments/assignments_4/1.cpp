// Write a C++ Program to create a function template for finding a maximum value contained
// in array

#include <iostream>

using namespace std;

template <typename T>

T findMaxFromArray(T arr[],int len)
{
    T max=arr[0];

    for (int i = 0; i < len; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    

    return max;
}

int main()
{
    int arr1[10]={1,23,4,23,45,23,5667,8,67,56};
    double arr2[10]={1,23,4,23,45,23,5667.980,8,67,56};

    int maxInt=findMaxFromArray(arr1,10);
    double maxDouble=findMaxFromArray(arr2,10);

    cout<<"Max integer : "<<maxInt<<endl;

    cout<<"Max double : "<<maxDouble;

    return 0;
}