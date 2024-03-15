using System;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] arr = new int[nm[0]+1];
            int[] input = new int[2];
            int temp=0;

            for (int i = 1; i <= nm[0]; i++)
            {
                arr[i] = i;
            }
            for (int i = 0; i < nm[1]; i++)
            {
                input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                temp = arr[input[0]];
                arr[input[0]] = arr[input[1]];
                arr[input[1]] = temp;

            }


            for (int i = 1; i <= nm[0]; i++)
                Console.Write($"{ arr[i]} ");
        }
    }
}