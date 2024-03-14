using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '),int.Parse);
            int x = input[0], y = input[1], w = input[2], h = input[3];
            int[] arr = new int[4];
            arr[0] = h - y;
            arr[1] = y;
            arr[2] = x;
            arr[3] = w - x;
            int min = arr[0];
            for (int i = 1; i< 4; i++)
            {
                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }
            Console.WriteLine(min);
        }
    }
}