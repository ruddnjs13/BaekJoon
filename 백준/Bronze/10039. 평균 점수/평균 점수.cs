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
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                int input = int.Parse(Console.ReadLine());
                if (input < 40)
                {
                    input = 40;
                }
                sum += input;
            }
            Console.WriteLine(sum/5);
        }
    }
}