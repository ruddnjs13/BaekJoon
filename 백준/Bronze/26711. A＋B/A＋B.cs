using System;
using System.Collections.Specialized;
using System.Numerics;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger a, b;
            a = BigInteger.Parse(Console.ReadLine());
            b = BigInteger.Parse(Console.ReadLine());

            Console.WriteLine(a + b);
        }
    }
}