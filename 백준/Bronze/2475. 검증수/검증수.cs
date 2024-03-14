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
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' ') ,int.Parse);
            Console.WriteLine((input[0] * input[0] + input[1] * input[1] + input[2] * input[2] + input[3] * input[3] + input[4] * input[4])%10);
        }
    }
}