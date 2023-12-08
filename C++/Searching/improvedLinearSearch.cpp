#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int moveToHeadMethod(struct Array *arr, int element)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == element)
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int transpositionMethod(struct Array *arr, int element)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == element)
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

void printResult(int res)
{
    if (res >= 0)
        cout << "Found at index: " << res<<"\n";
    else
        cout << "Not found\n";
}

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << "\n";
}

int main()
{
    struct Array arr = {{1, 2, 5, 4, 3}, 10, 5};
    display(arr);

    int res = transpositionMethod(&arr, 5);
    printResult(res);
    display(arr);

    res = moveToHeadMethod(&arr, 5);
    printResult(res);
    display(arr);
}