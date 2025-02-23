using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SelectionSort
{
    public class Sort
    {
        public void SelectionSort(int[] A, int n)
        {
            for(int i = 0; i < n; i++)
            {
                int position = i;
                for(int j=i+1; j<n; j++)
                {
                    if (A[j]< A[position])
                    {
                        position = j;
                    }
                }
                if(position != i)
                {
                    int temp = A[i];
                    A[i] = A[position];
                    A[position] = temp;
                }
               
            }
        }

        public void Display(int[] A, int n)
        {
            for(int i = 0; i < n; i++)
            {
                Console.Write(A[i]+" ");
            }
            Console.WriteLine();
        }
    }
}
