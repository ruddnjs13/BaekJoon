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
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                int a = input[0], b = input[1];
                if (b > a)
                {
                    int temp = a;
                    a = b;
                    b = temp;
                }
                int c = a, d = b;
                while (a % b != 0)
                {
                    int temp = a % b;
                    a = b;
                    b = temp;
                }
                Console.WriteLine((c * d) / b);
            }
        }
    }
}