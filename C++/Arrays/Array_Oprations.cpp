#include<iostream>
using namespace std;

int *insertElementAtParticularPosition(int arr[], int &arrSize, int element, int pos)
{
    arrSize++;
    for(int i=arrSize; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = element;

    return arr;
}

void Display(int *arr, int arrSize)
{
    for(int i=0; i<arrSize; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {15,25,35,45,55};
    
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    Display(arr, arrSize);

    insertElementAtParticularPosition(arr, arrSize, 50, 2);
    Display(arr, arrSize);
    
}