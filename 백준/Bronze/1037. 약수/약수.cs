using System;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            Array.Sort(input);
            if (input.Length == 1)
            {
                Console.WriteLine(input[0] * input[0]);
            }
            else
            {
                Console.WriteLine(input[input.Length - 1] * input[0]);
            }
        }
    }
}
 