using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c, max;
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            a = input[0]; b = input[1]; c = input[2];
            if (a >= b)
            {
                max = a;
                if (c > a)
                {
                    max = c;
                }
            }
            else
            {
                max = b;
                if (c > b)
                {
                    max = c;
                }
            }
            if (max == a && b + c <= a)
            {
                a = b + c - 1;
                Console.WriteLine(a + b + c);
            }
            else if (max == b && a + c <= b)
            {
                b = a + c - 1;
                Console.WriteLine(a + b + c);
            }
            else if (max == c && b + a <= c)
            {
                c = b + a - 1;
                Console.WriteLine(a + b + c);
            }
            else
            {
                Console.WriteLine(a+b+c);
            }
        }
    }
}