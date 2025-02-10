using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearchRecursive
{
    public class Search
    {
        public int binarySearch(int[] arr, int target, int left, int right)
        {
            if(left>right)
            {
                return -1;
            }
            else
            {
                int mid = (left + right) / 2;
                if (target == arr[mid])
                {
                    return mid;
                }
                else if (target > arr[mid])
                {
                    return binarySearch(arr, target, mid+1, right);
                }
                else if (target < arr[mid])
                {
                    return binarySearch(arr, target, left, mid - 1);
                }
                return -1;
            }
          
            
        }

    }
}
