using System;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int i = 1; i <= n; i++)
            {
                for (int star1 = 1; star1 <=i; star1++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            for (int i = 1; i <= n; i++)
            {
                for (int star1 = i; star1 <= n-1; star1++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
