#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    int index_min;
    for(int i=0; i<n-1; i++){
        index_min = i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index_min]){
                index_min = j;
            }
        }

        if(index_min!=i){
            swap(arr[index_min], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {3,2,1,5,4};
    int siz = sizeof(arr)/sizeof(arr[0]);
    display(arr, siz);
    selectionSort(arr, siz);
    display(arr, siz);
    
}