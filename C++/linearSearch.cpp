#include<iostream>
using namespace std;


int linearSearch(int arr[], int sizeOfArray, int target)
{
    for(int i=0; i<sizeOfArray; i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main()
{
    int a[10] = {5,6,7,8,1,2,3,4,9,10};
    int sizeOfArr = sizeof(a)/sizeof(a[0]);
    int res = linearSearch(a, sizeOfArr, 3);

    if(res==-1)
        cout<<"Element not found\n";
    else
        cout<<"Element found at index: "<<res<<"\n";
}