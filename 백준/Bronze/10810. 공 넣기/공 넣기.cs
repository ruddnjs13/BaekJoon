using System;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] arr = new int[nm[0]+1];
            int[] input = new int[3];
            for (int i = 0; i < nm[1]; i++)
            {
                input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                for (int j = input[0];j <= input[1]; j++)
                {
                    arr[j] = input[2];
                }
            }
            for (int i = 1; i <= nm[0]; i++)
                Console.Write($"{ arr[i]} ");
        }
    }
}