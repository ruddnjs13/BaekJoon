using System;
using System.Collections.Specialized;
using System.Numerics;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger n, sum = 0, input;

            for (int i = 0; i < 3; i++)
            {
                sum = 0;
                n = int.Parse(Console.ReadLine());
                for (int j = 0; j < n; j++)
                {
                    input = BigInteger.Parse(Console.ReadLine());
                    sum += input;
                }

                if (sum == 0)
                {
                    Console.WriteLine(0);
                }
                else
                {
                    Console.WriteLine(sum < 0 ? '-' : '+');
                }
            }

        }
    }
}