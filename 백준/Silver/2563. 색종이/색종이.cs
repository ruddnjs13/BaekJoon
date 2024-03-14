using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)

        {
            int[,] paper = new int[101, 101];
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                for (int y = 101 - (input[0] + 10); y < 101 - input[0]; y++)
                {
                    for (int x = input[1]; x < (input[1] + 10); x++)
                    {
                        paper[y, x] = 1;
                    }
                }
            }
            int count = 0;
            for (int i = 0; i < 101; i++)
            {
                for (int j = 0; j < 101; j++)
                {
                    if (paper[i, j] == 1)
                    {
                        count++;
                    }
                }
            }
            Console.WriteLine(count);
        }
    }
}