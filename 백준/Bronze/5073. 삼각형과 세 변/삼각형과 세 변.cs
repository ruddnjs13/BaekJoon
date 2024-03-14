using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c, max;

           while (true)
            {
                int[] input= Array.ConvertAll(Console.ReadLine().Split(' '),int.Parse);
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


                if (a == 0 && b ==0 && c == 0)
                {
                    break;
                }

                if (a ==0 || b == 0 || c == 0)
                {
                    Console.WriteLine("Invalid");
                }
                else if (a == max && b + c <= max)
                {
                    Console.WriteLine("Invalid");
                }
                else if (b == max && a + c <= max)
                {
                    Console.WriteLine("Invalid");
                }
                else if (c == max && b + a <= max)
                {
                    Console.WriteLine("Invalid");
                }
                else if (a == b && b == c)
                {
                    Console.WriteLine("Equilateral");
                }
                else if ((a == c && c != b) || (b == c) && (c != a) || (a == b) && (b != c))
                {
                    Console.WriteLine("Isosceles");
                }
                else if (a !=b && b != c && c != b)
                {
                    Console.WriteLine("Scalene");
                }
            }
        }
    }
}