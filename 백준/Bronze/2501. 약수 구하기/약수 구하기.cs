using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            for (int i = 1; i<= input[0]; i++)
            {
                if (input[0] % i == 0)
                {
                    input[1]--;
                }
                if (input[1]== 0)
                {
                    Console.WriteLine(i);
                    break;
                }
                if (i ==input[0] && input[1] > 0)
                {
                    Console.WriteLine(0);
                }

            }
            
        }
    }
}