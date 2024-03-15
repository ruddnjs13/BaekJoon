using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;
using System.Collections.Generic;
using System.Linq;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                if (input[0] + input[1] == 0)
                {
                    break;
                }
                else if (input[0] > input[1])
                {
                    Console.WriteLine("Yes");
                }
                else
                {
                    Console.WriteLine("No");
                }
            }
        }
    }
}