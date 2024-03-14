using System;

namespace BaekJoon
{
    class Program
    {
        static void Main()
        {
            int[] numarr = new int[5];
            for (int i = 0; i <5; i++)
            {
                numarr[i] = int.Parse(Console.ReadLine());
            }
            Array.Sort(numarr);
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += numarr[i];
            }
            Console.WriteLine(sum / 5);
            Console.WriteLine(numarr[2]);
        }
    }
}
