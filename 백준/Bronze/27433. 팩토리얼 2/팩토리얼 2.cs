using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;
using System.Linq;


namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            long sum = 1;

            for (int i = 1; i <= n; i++)
            {
                sum *= i;
            }
            Console.WriteLine(sum);
        }
    }
}