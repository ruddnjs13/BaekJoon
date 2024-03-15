using Microsoft.VisualBasic.FileIO;
using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());

            if (a == 60 && b == 60 && c == 60)
                Console.WriteLine("Equilateral");
            else if ((a+b+c) == 180)
            {
                if (a == b)
                {
                    Console.WriteLine("Isosceles");
                }
                else if (b == c)
                {
                    Console.WriteLine("Isosceles");
                }
                else if (a == c)
                {
                    Console.WriteLine("Isosceles");
                }
                else
                {
                    Console.WriteLine("Scalene");
                }
            }
            else
            {
                Console.WriteLine("Error");
            }
        }
    }
}