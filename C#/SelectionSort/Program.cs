using SelectionSort;

int[] arr = { 3, 8, 5, 2, 9, 5 };

Sort sort = new Sort();
Console.WriteLine("Before sorting:");
sort.Display(arr, arr.Length);

sort.SelectionSort(arr, arr.Length);
Console.WriteLine("After sorting:");
sort.Display(arr, arr.Length);
