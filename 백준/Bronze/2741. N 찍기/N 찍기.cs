using System;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            StringBuilder stb = new StringBuilder();
            for (int i = 1; i <= n; i++)
            {
                stb.AppendLine(i.ToString());
            }
            Console.WriteLine(stb);
        }
    }
}
