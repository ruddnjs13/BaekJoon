using System;
namespace goorm
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] arr = new int[9, 9];
            int hang = 0;
            int yeol = 0;
            int max = 0;

            for (int i = 0; i < 9; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                for (int j = 0; j < 9; j++)
                {
                    arr[i, j] = input[j];
                    if (arr[i, j] > max)
                    {
                        max = arr[i, j];
                        hang = i;
                        yeol = j;
                    }
                }
            }
            Console.WriteLine($"{max}\n{hang + 1} {yeol + 1}");
        }
    }
}