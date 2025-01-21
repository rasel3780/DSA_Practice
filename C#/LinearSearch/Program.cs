int linearSearch(int[] A, int n, int target)
{
    for(int i = 0; i<n; i++)
    {
        if(A[i] == target)
        {
            return i;
        }
    }    
    
    return -1;
}

int[] arr = { 1, 2, 3, 4, 5, 6, 7 };
int result = linearSearch(arr, arr.Length, 5);
Console.WriteLine("Result: "+ result);
