using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)

        {
            long[] input = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
            long result = input[0] - input[1];
            if (result < 0)
                result *= -1;
            Console.WriteLine(result);
        }
    }
}