using System;
using System.Threading;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int points = 4;
            int n = 1;
            int input = int.Parse(Console.ReadLine());
            for (int i = 1; i <= input; i++)
            {
                points = ((2 * n)+1)*((2*n)+1);
                n *= 2;
            }
            Console.WriteLine(points);
        }
    }
}