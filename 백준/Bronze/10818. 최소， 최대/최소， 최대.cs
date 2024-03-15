using System;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            int[] numarr = new int[num];
            numarr = Array.ConvertAll(Console.ReadLine().Split(' '),int.Parse);

            int min = numarr[0], max = numarr[0];

            for (int i = 0; i < num; i++)
            {
                if (numarr[i] < min)
                    min = numarr[i];
                if (numarr[i] > max)
                    max = numarr[i];
            }
            Console.WriteLine("{0} {1}", min, max);
        }
    }
}
