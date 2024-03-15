using System;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, k;
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            n = input[0];
            k = input[1];

            int[] arrnum = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            Array.Sort(arrnum);
            Console.WriteLine(arrnum[n - k]);
        }
    }
}
