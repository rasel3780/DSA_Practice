#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;

};

//using extra array 
void Reverse1(struct Array *arr)
{
    int *B;
    B=new int[arr->length];

    for(int i=arr->length-1, j=0; i>=0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for(int i=0; i<arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    struct Array arr = {{1,2,3,4,5}, 10, 5};
    Display(arr);
    Reverse1(&arr);
    Display(arr);

}