#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void Insert(struct Array *arr, int x)
{
    int i = arr->length-1;
    if(arr->length==arr->size)
        return;
    
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

bool IsSorted(struct Array arr)
{
    for(int i=0; i<arr.length-1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return false;
    }
    return true;
}

int main()
{
    struct Array arr = {{10,12,18,20,25}, 10, 5};
    Display(arr);
    Insert(&arr, 15);
    Display(arr);
    cout<<IsSorted(arr);

}