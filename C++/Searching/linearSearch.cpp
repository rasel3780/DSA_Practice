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
    int arr[] = {5,3,1,2,4};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    
    int res = linearSearch(arr, sizeOfArr, 3);

    if(res==-1)
        cout<<"Element not found\n";
    else
        cout<<"Element found at index: "<<res<<"\n";
}