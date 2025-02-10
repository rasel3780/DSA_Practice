using BinarySearchRecursive;

namespace BinarySearchRecursiveUnitTest
{
    public class Tests
    {
        private Search search;
        [SetUp]
        public void Setup()
        {
            search = new Search();
        }

        [Test, Category("Unit Test")]
        public void BinarySearh_TargetExists_ReturnsCorrectIndex()
        {
            int[] arr = { 1, 2, 3, 4, 5 };
            int target = 3;
            int expected = 2;
            int result = search.binarySearch(arr, target, 0, arr.Length-1);

            Assert.AreEqual(expected, result);
        }

        [Test, Category("Unit Test")]
        public void BinarySearh_TargetDoesNotExists_ReturnsNegativeOne()
        {
            int[] arr = { 1, 2, 3, 4, 5 };
            int target = 6;
            int expected = -1;
            int result = search.binarySearch(arr, target, 0, arr.Length - 1);

            Assert.AreEqual(expected, result);
        }

        [Test, Category("Unit Test")]
        public void BinarySearh_EmptyArray_ReturnsNegativeOne()
        {
            int[] arr = { };
            int target = 10;
            int expected = -1;
            int result = search.binarySearch(arr, target, 0, arr.Length - 1);

            Assert.AreEqual(expected, result);
        }




    }
}