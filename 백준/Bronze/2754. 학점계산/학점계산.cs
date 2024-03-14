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
            if (input[0] == 'A')
            {
                if (input[1] == '+')
                    Console.Write(4.3);
                else if (input[1] == '0')
                    Console.Write("4.0");
                else if (input[1] == '-')
                    Console.Write(3.7);
            }
            else if (input[0] == 'B')
            {
                if (input[1] == '+')
                    Console.Write(3.3);
                else if (input[1] == '0')
                    Console.Write("3.0");
                else if (input[1] == '-')
                    Console.Write(2.7);
            }
            else if (input[0] == 'C')
            {
                if (input[1] == '+')
                    Console.Write(2.3);
                else if (input[1] == '0')
                    Console.Write("2.0");
                else if (input[1] == '-')
                    Console.Write(1.7);
            }
            else if (input[0] == 'D')
            {
                if (input[1] == '+')
                    Console.Write(1.3);
                else if (input[1] == '0')
                    Console.Write("1.0");
                else if (input[1] == '-')
                    Console.Write(0.7);
            }
            else
                Console.WriteLine("0.0");
        }
    }
}