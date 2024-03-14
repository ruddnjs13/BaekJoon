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
            string input = Console.ReadLine();
            for (int i = 0; i < input.Length; i++)
            {
                if (input[i] < 91)
                {
                    Console.Write((char)(input[i] + 32));
                }
                else if (input[i] > 96)
                {
                    Console.Write((char)(input[i] - 32));
                }
            }
        }
    }
}