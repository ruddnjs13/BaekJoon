using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            while (true)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                a = input[0];
                b = input[1];
                if (a == 0 && b == 0)
                {
                    break;
                }
                if (a % b == 0)
                {
                    Console.WriteLine("multiple");
                }
                else if (b % a == 0)
                {
                    Console.WriteLine("factor");
                }
                else
                    Console.WriteLine("neither");
            }
        }
    }
}