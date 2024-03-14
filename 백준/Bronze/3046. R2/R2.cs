using System;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            Console.WriteLine(input[1] * 2 - input[0]);
        }
    }
}