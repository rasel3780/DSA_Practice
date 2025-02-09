
using LinearSearch;
using System.Data;

namespace LinearSearchUnitTest
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
            int[] arr = {1,2,3,4,5,6,7,8,9,10};
            int arrLength = arr.Length;
            int target = 5;
            int result = search.linearSearch(arr, arrLength, target);
            int expected = 4;
            Assert.AreEqual(result, expected);
        }

        [Test, Category("UnitTest")]
        public void Test2()
        {
            Search search = new Search();
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int arrLength = arr.Length;
            int target = 15;
            int result = search.linearSearch(arr, arrLength, target);
            int expected = -1;
            Assert.AreEqual(result, expected);
        }
    }
}