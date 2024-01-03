#include<iostream>
using namespace std;

int binarySearch(int arr[], int len, int key)
{
    int left=0;
    int right=len-1;
    int mid;

    while(left<=right)
    {
        mid = (left+right)/2;
        
        if(key==arr[mid])
            return mid;
        
        else if(key>arr[mid])
            left = mid+1;

        else
            right = mid-1;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr, arrSize, 10)<<endl;
    cout<<binarySearch(arr, arrSize, 17)<<endl;
    cout<<binarySearch(arr, arrSize, 5)<<endl;
}