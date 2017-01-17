using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Pyramid
{
    class Program
    {
        static void DrawPyramid(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = i; j <= n; j++)
                {
                    Console.Write(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
        static void DrawInvertedPyramid(int n)
        {
            for (int i = n; i > 0; i--)
            {
                for (int j = i; j <= n; j++)
                {
                    Console.Write(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Give me how many rows the pyramid should have");
            string x = Console.ReadLine();
            int row = Convert.ToInt32(x);
            DrawPyramid(row);
            DrawInvertedPyramid(row);
            Console.ReadLine();
        }
    }
}
