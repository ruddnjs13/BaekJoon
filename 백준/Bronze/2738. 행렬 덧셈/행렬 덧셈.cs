using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)

        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[,] arr1 = new int[input[0], input[1]];
            int[,] arr2 = new int[input[0], input[1]];

            for (int i = 0; i <input[0]; i++)
            {
                int[] n = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                for (int j = 0; j<input[1]; j++)
                {
                    arr1[i, j] = n[j];
                }
            }
            for (int i = 0; i < input[0]; i++)
            {
                int[] n = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                for (int j = 0; j < input[1]; j++)
                {
                    arr2[i, j] = n[j];
                }
            }
            for (int i = 0; i < input[0]; i++)
            {
                for (int j = 0; j < input[1]; j++)
                {
                    arr1[i, j] = arr1[i, j] + arr2[i, j];
                    Console.Write(arr1[i, j]+" ");
                }
                Console.WriteLine();
            }
        }
    }
}