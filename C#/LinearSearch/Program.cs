public class LinearSearching
{
    public static int linearSearch(int[] arr, int arrLen, int target)
    {
        for(int i = 0; i<arrLen; i++)
        {
            if (arr[i] == target)
                return i;
        }
        return -1;
    }

    public static void Main(string[] args)
    {
        int[] arr = { 1, 5, 4, 6, 3, 8, 10, 9, 2, 7};
        int res = linearSearch(arr, arr.Length, 8);
        if(res == -1)
            Console.WriteLine("Not found");
        else
            Console.WriteLine($"Found at index: {res}");
    }
}