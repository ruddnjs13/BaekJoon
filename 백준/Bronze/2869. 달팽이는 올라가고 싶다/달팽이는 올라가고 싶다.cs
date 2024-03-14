using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            Console.WriteLine((input[2] - input[1]-1) / (input[0] - input[1]) + 1);
        }
    }
}