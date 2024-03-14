using System;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            int[] numarr = new int[n];

            StringBuilder answer = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                numarr[i] = int.Parse(Console.ReadLine());
            }
            Array.Sort(numarr);
            for (int i = 0; i < n; i++)
            {
                answer.AppendLine(numarr[i].ToString());
            }
            Console.WriteLine(answer);
        }
    }
}
