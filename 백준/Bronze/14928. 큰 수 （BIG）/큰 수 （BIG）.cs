using System;
using System.Collections.Specialized;
using System.Numerics;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger input;
            input  = BigInteger.Parse(Console.ReadLine());
            Console.WriteLine(input % 20000303);
        }
    }
}