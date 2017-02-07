using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleApplication
{
    class Program
    {

        static void Main(string[] args)
        {
            int[] arr = new int[5] {2, 3, 18, 52, 86 };
            if (BinarySearch(arr, 18))
            {
                Console.WriteLine("The number was found in the list.\n");
            }
            else
            {
                Console.WriteLine("The number was not found in the list.\n");
            }
            Console.ReadLine();

        }
        static bool BinarySearch(int[] array, int number)
        {
            int startindex = 0;
            int finishindex = array.Length - 1;
            while (finishindex >= startindex)
            {
                int mid = (startindex + finishindex) / 2;
                
                if (number == array[mid])
                {
                    return true;
                }
                else if (number > array[mid])
                {
                    startindex = mid + 1;
                }
                else if (number < array[mid])
                {
                    finishindex = mid - 1;
                }
            }
            return false;
        }
    }
}


