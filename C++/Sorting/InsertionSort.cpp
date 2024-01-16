#include<iostream>
using namespace std;
void display(int arr[], int n);

void insertionSort(int arr[], int n)
{
    int j, key;
    for(int i=1; i<n; i++)
    {
        key = arr[i];
        cout<<"key1: "<<key<<endl;
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
            cout<<"while: ";
            display(arr, n);
        }
        cout<<"key2: "<<key<<endl;
        cout<<"j: "<<j+1<<endl;
        arr[j+1] = key;
        cout<<"for: ";
        display(arr, n);
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int siz = sizeof(arr)/sizeof(arr[0]);
    display(arr, siz);
    insertionSort(arr, siz);
    display(arr, siz);

}