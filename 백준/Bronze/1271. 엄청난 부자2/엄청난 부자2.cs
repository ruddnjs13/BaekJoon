using System;
using System.Collections.Specialized;
using System.Numerics;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger[] inputs;
            inputs = Array.ConvertAll(Console.ReadLine().Split(' '),BigInteger.Parse);


            Console.WriteLine(inputs[0] / inputs[1]);
            Console.WriteLine(inputs[0] % inputs[1]);
        }
    }
}