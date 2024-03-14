using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[,] answer = new int[n,4];
            for (int i = 0; i < n; i++)
            {
                int input = int.Parse(Console.ReadLine());
                answer[i, 0] = input / 25;
                input %= 25;
                answer[i, 1] = input / 10;
                input %= 10;
                answer[i, 2] = input / 5;
                input %= 5;
                answer[i, 3] = input / 1;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    Console.Write(answer[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}