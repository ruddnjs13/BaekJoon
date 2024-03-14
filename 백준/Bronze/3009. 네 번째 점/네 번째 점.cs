using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] one = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] two = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] three = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            {
                if (one[0] == two[0])
                    Console.Write(three[0]);
                else if (one[0] == three[0])
                    Console.Write(two[0]);
                else
                    Console.Write(one[0]);
            }
            Console.Write(" ");
            {
                if (one[1] == two[1])
                    Console.Write(three[1]);
                else if (one[1] == three[1])
                    Console.Write(two[1]);
                else
                    Console.Write(one[1]);
            }
        }
    }
}