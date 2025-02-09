using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearch_Iterative
{
    public class Search
    {
        public int BinarySearch(int[] arr, int length, int target)
         {
            int left = 0;
            int right = length-1;
            while(left<=right)
            {
                int midIndex = (left + right) / 2;

                if (arr[midIndex]== target)
                {
                    return midIndex;
                }
                else if (target < arr[midIndex])
                {
                    right = midIndex - 1;
                }
                else if (target > arr[midIndex])
                {
                    left = midIndex + 1;
                }
            }
            return -1;
        }
    }
}
