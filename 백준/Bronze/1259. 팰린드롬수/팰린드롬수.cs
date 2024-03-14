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
                int input = int.Parse(Console.ReadLine());
                if (input == 0)
                {
                    break;
                }
                string str = input.ToString();
                int i = 0, j =  str.Length - 1;
                while (i <= j)
                {
                    if (str[i] != str[j])
                    {
                        Console.WriteLine("no");
                        break;
                    }
                    else if (i+1 > j -1)
                    {
                        Console.WriteLine("yes");
                        break;
                    }
                    i++;
                    j--;  
                }
            }
        }
    }
}