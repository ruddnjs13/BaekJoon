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
            int l = int.Parse(Console.ReadLine());
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());
            int d = int.Parse(Console.ReadLine());

           for (int i = 1; i < l; i++)
            {
                if (c * i >= a && d * i >= b)
                {
                    Console.WriteLine(l - i);
                    break;
                }
                else if (i+1 == l)
                {
                    Console.WriteLine(0);
                    break;
                }
            }
        }
    }
}