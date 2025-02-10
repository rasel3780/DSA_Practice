using BinarySearchRecursive;

int[] arr = { 1, 2, 3, 4, 5 };

Search search = new Search();

int target = 1;
int result = search.binarySearch(arr, target, 0, arr.Length-1);

Console.WriteLine(result);

target = 6;
result = search.binarySearch(arr, target, 0, arr.Length-1);

Console.WriteLine(result);
