#include<iostream>
using namespace std;

int* insert(int arr[], int n, int key, int pos)
{
    int i;
    n++;
    for(i=n; i>=pos; i--)
    {
        arr[i]=arr[pos-1];
    }
    arr[pos-i] = key;
    return arr;
}
int main()
{
    int arr[20] = {0};
    int n=5;
    for(int i=0; i<n; i++){
        arr[i]=0;
    }
    
    insert(arr, 5, 10, 2);

    for(int i=0; i<n+1; i++){
        cout<<arr[i]<<" ";
    }
}