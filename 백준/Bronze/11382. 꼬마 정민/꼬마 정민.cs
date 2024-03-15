using System;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            long[] input = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
            Console.WriteLine(input[0] + input[1] + input[2]);
        }
    }
}
