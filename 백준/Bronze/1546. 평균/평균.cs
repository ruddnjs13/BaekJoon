using System;
using System.Threading;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            float n = float.Parse(Console.ReadLine());
            float[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), float.Parse);

            float max = arr[0];
            float sum = 0;

            for (int i = 1; i < arr.Length; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }

            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = arr[i] / max * 100;
                sum += arr[i];
            }
            Console.WriteLine(sum/arr.Length);
        }

    }
}