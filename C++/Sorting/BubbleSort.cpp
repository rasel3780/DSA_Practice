#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
        cout<<i<<":"<<endl;
        display(arr, n);
        
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int siz = sizeof(arr)/sizeof(arr[0]);
    display(arr, siz);
    bubbleSort(arr, siz);
    
}