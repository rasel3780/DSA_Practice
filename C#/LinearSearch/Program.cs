using LinearSearch;

Search search = new Search();

int[] arr = { 1, 2, 3, 4, 5, 6, 7 };
int result = search.linearSearch(arr, arr.Length, 5);
Console.WriteLine("Result: " + result);

