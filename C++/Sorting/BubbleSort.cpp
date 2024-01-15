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
    }
}

int main()
{
    int arr[] = {1,3,2,4,5,7,6};
    int siz = sizeof(arr)/sizeof(arr[0]);
    display(arr, siz);
    bubbleSort(arr, siz);
    display(arr, siz);

}