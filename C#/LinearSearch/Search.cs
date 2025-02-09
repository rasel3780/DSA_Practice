using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinearSearch
{
    public class Search
    {
        public int linearSearch(int[] A, int n, int target)
        {
            for (int i = 0; i < n; i++)
            {
                if (A[i] == target)
                {
                    return i;
                }
            }

            return -1;
        }
    }
}
