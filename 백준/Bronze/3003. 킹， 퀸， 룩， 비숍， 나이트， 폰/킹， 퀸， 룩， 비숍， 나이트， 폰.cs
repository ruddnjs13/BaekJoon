using System;

namespace Test123
{
    class Program
    {
        static void Main(string[] args)

        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] black_piece = new int[] { 1, 1, 2, 2, 2, 8 };
            int[] need_piece = new int[6];
            for (int i = 0; i < input.Length; i++)
            {
                need_piece[i] = black_piece[i] - input[i];
                Console.Write(need_piece[i]+" ");
            }
        }
    }
}