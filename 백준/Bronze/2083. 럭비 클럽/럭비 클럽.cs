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
            while (true)
            {
                string input = Console.ReadLine();
                if (input == "# 0 0")
                {
                    break;
                }
                string[] inputarr = input.Split(' ');

                if (Convert.ToInt32(inputarr[1]) < 18 && Convert.ToInt32(inputarr[2]) < 80)
                {
                    Console.WriteLine($"{inputarr[0]} Junior");
                }
                else
                {
                    Console.WriteLine($"{inputarr[0]} Senior");
                }
            }
        }
    }
}