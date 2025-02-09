using BinarySearch_Iterative;

Search search = new Search();

int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int length = arr.Length;
int target = 1;
int result = search.BinarySearch(arr, length, target);
Console.WriteLine(result);
result = search.BinarySearch(arr, length, 2);
Console.WriteLine(result);
result = search.BinarySearch(arr, length, 15);
Console.WriteLine(result);