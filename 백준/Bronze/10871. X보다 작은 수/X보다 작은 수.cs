using System;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nxinput = Array.ConvertAll( Console.ReadLine().Split(' '),int.Parse);

            int[] numinput = new int[nxinput[0]];

            numinput = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            for (int i = 0; i < nxinput[0];i++)
            {
                if (numinput[i] < nxinput[1])
                    Console.Write("{0} ", numinput[i]);
            }
        }
    }
}
