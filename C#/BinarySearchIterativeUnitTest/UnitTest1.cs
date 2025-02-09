using BinarySearch_Iterative;
namespace BinarySearchIterativeUnitTest
{
    public class Tests
    {
        [SetUp]
        public void Setup()
        {
        }

        [Test, Category("UnitTest")]
        public void Test1()
        {
            Search search = new Search();
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int length = arr.Length;
            int target = 5;
            int result = search.BinarySearch(arr, length, target);
            int expected = 4;
            Assert.AreEqual(expected, result);
        }

        [Test, Category("UnitTest")]
        public void Test2()
        {
            Search search = new Search();
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int length = arr.Length;
            int target = 11;
            int result = search.BinarySearch(arr, length, target);
            int expected = -1;
            Assert.AreEqual(expected, result);
        }
    }
}