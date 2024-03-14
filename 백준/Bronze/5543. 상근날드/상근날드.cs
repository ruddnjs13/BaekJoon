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
            int[] burgers = new int[3];
            int[] drinks = new int[2];
            burgers[0] = int.Parse(Console.ReadLine());
            burgers[1] = int.Parse(Console.ReadLine());
            burgers[2] = int.Parse(Console.ReadLine());
            drinks[0] = int.Parse(Console.ReadLine());
            drinks[1] = int.Parse(Console.ReadLine());
            Array.Sort(burgers);
            Array.Sort(drinks);
            Console.WriteLine((burgers[0] + drinks[0]) - 50);
        }
    }
}