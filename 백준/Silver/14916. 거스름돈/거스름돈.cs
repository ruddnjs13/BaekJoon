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
            int input = int.Parse(Console.ReadLine());
            int count = 0;

            int roop = input / 5;
            count = input / 5;
            input = input % 5;
            if (input == 0)
            {
                Console.WriteLine(count);
            }
            else
            {
               for (int i = 0; i <= roop; i++)
                {
                    if (input % 2 == 0)
                    {
                        Console.WriteLine(count + (input/2));
                        break;
                    }
                    else if (i == roop)
                    {
                        Console.WriteLine(-1);
                    }
                    input += 5;
                    count--;
                }
            }
        }
    }
}