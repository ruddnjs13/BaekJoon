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
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int a = input[0], b = input[1], c = input[2];
            if (a > b)
            {
                int temp = a;
                a = b;
                b = temp;
            }
            if (b > c)
            {
                int temp = b;
                b = c;
                c = temp;
            }
            if (a > b)
            {
                int temp = a;
                a = b;
                b = temp;
            }
            Console.WriteLine($"{a} {b} {c}");
        }
    }
}