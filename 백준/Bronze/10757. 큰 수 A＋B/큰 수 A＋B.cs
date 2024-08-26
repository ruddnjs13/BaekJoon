using System;
using System.Collections.Specialized;
using System.Numerics;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger[] input;

            input = Array.ConvertAll(Console.ReadLine().Split(), BigInteger.Parse);

            Console.WriteLine(input[0] + input[1]);
        }
    }
}