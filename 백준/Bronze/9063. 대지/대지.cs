using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] arr_x = new int[n];
            int[] arr_y = new int[n];   
            for (int i = 0; i< n; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                arr_x[i] = input[0];
                arr_y[i] = input[1];
            }
            int max_x = arr_x[0], min_x = arr_x[0], max_y = arr_y[0], min_y = arr_y[0];
            for (int i = 0; i < n; i++)
            {
                if (arr_x[i] > max_x)
                {
                    max_x = arr_x[i];
                }
                if (arr_x[i] < min_x)
                {
                    min_x = arr_x[i];
                }
                if (arr_y[i] > max_y)
                {
                    max_y = arr_y[i];
                }
                if (arr_y[i] < min_y)
                {
                    min_y = arr_y[i];
                }
            }
            Console.WriteLine((max_x-min_x)*(max_y-min_y));
        }
    }
}