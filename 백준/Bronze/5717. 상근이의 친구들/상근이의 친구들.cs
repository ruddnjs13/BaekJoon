using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                if (input[0] == 0 && input[1] == 0)
                {
                    break;
                }
                Console.WriteLine(input[0] + input[1]);
            }
        }
    }
}