#include <iostream>
using namespace std;

int searchElementPosition(int arr[], int arrSize, int element)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i]==element)
            return i;
    }
    return -1;
}

void deleteAnElement(int arr[], int &arrSize, int element)
{
    int pos = searchElementPosition(arr, arrSize, element);
    if(pos!=-1)
    {
        for(int i=pos; i<arrSize; i++)
            arr[i] = arr[i+1];
        arrSize--;
    }
    else
        cout<<"Element Not Found\n";
}

int *insertElementAtParticularPosition(int arr[], int &arrSize, int element, int pos)
{
    arrSize++;
    for (int i = arrSize; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;

    return arr;
}

void Display(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {15, 25, 35, 45, 55};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    Display(arr, arrSize);

    insertElementAtParticularPosition(arr, arrSize, 50, 2);
    Display(arr, arrSize);

    deleteAnElement(arr, arrSize, 50);
    Display(arr, arrSize);
    
}