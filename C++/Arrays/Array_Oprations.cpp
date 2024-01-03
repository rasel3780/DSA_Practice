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

int Get(int arr[], int arraySize, int index)
{
    if(index>=0 && index<arraySize)
        return arr[index];
    return -1;
}

int Max(int arr[], int arraySize)
{
    int maxx = arr[0];
    for(int i=0; i<arraySize; i++)
    {
        if(arr[i]>maxx)
            maxx=arr[i];
    }
    return maxx;
}

int Min(int arr[], int arraySize)
{
    int minn = arr[0];
    for(int i=0; i<arraySize; i++)
    {
        if(arr[i]<minn)
            minn=arr[i];
    }
    return minn;
}

int Sum(int arr[], int arraySize)
{
    int total = 0;
    for(int i=0; i<arraySize; i++)
        total = total+arr[i];
    
    return total;
}

double Avg(int arr[], int arraySize)
{
    int total = 0;
    for(int i=0; i<arraySize; i++)
        total = total+arr[i];
    
    return double(total)/arraySize;
}



int main()

{
    int arr[] = {15, 25, 35, 45, 55, 61, 63};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    Display(arr, arrSize);

    insertElementAtParticularPosition(arr, arrSize, 50, 2);
    Display(arr, arrSize);

    deleteAnElement(arr, arrSize, 50);
    Display(arr, arrSize);

    cout<<Get(arr, arrSize, 2)<<endl;
    cout<<Max(arr, arrSize)<<endl;
    cout<<Min(arr, arrSize)<<endl;
    cout<<Sum(arr, arrSize)<<endl;
    cout<<Avg(arr, arrSize)<<endl;
    
}