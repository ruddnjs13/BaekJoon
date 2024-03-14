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
            int sum = 0,  min = 101;
            for (int i = 0; i < 7; i++)
            {
                int input = int.Parse(Console.ReadLine());
                if (input % 2 == 1)
                {
                    sum += input;
                    if (input < min)
                    {
                        min = input;
                    }
                }
            }
           if (sum == 0)
            {
                Console.WriteLine(-1);
            }
           else
            {
                Console.WriteLine(sum+"\n"+min);
            }
        }
    }
}