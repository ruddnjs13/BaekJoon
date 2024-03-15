using System;
using System.Threading;

namespace baekjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);


            if (input[0] > input[1])
            {
                int temp = input[0];
                input[0] = input[1];
                input[1] = temp;
            }
            if (input[1] > input[2])
            {
                int temp = input[1];
                input[1] = input[2];
                input[2] = temp;
            }
            if (input[0] > input[1])
            {
                int temp = input[0];
                input[0] = input[1];
                input[1] = temp;
            }
            Console.WriteLine(input[1]);

        }

    }
}