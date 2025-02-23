using SelectionSort;

namespace SelectionSortUnitTest
{
    public class Tests
    {
        private Sort sort;
        [SetUp]
        public void Setup()
        {
            sort = new Sort();
        }

        [Test, Category("UnitTest")]
        public void SelectionSort_EmptyArray_NoChange()
        {
            int[] arr = { };
            int expected = 0;
            sort.SelectionSort(arr, arr.Length);
            Assert.AreEqual(expected, arr.Length);
        }

        [Test, Category("UnitTest")]
        public void SelectionSort_SingleElement_NoChange()
        {
            int[] arr = {5 };
            int[] expected = { 5 };
            sort.SelectionSort(arr, arr.Length);
            Assert.AreEqual(expected, arr);
        }

        [Test, Category("UnitTest")]
        public void SelectionSort_SortedArray_NoChange()
        {
            int[] arr = { 1,2,3,4,5 };
            int[] expected = { 1,2,3,4,5 };
            sort.SelectionSort(arr, arr.Length);
            Assert.AreEqual(expected, arr);
        }

        [Test, Category("UnitTest")]
        public void SelectionSort_UnsortedArray_SortedCorrectly()
        {
            int[] arr = { 3, 2, 5, 1, 4 };
            int[] expected = { 1, 2, 3, 4, 5 };
            sort.SelectionSort(arr, arr.Length);
            Assert.AreEqual(expected, arr);
        }

        [Test, Category("UnitTest")]
        public void SelectionSort_UnsortedArrayWithDuplicates_SortedCorrectly()
        {
            int[] arr = { 3, 2, 5, 1, 5, 4 };
            int[] expected = { 1, 2, 3, 4, 5, 5 };
            sort.SelectionSort(arr, arr.Length);
            Assert.AreEqual(expected, arr);

        }

        [Test, Category("UnitTest")]
        public void SelectionSort_UnsortedArrayWithMixNumber_SortedCorrectly()
        {
            int[] arr = { 3, -2, 5, -1,-3,0, 5, 4 };
            int[] expected = { -3 ,- 2, -1, 0, 3, 4, 5 , 5};
            sort.SelectionSort(arr, arr.Length);
            Assert.AreEqual(expected, arr);
        }



    }
}