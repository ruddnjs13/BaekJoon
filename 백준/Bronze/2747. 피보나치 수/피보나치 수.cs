using System;

namespace Pybonacii
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int a = 0, b = 1, c = 0;

            for (int i = 0; i <= n; i++)
        {
            if (i != 0)
            {
                c = a + b;
                a = b;
                b = c;
            }
        }
        Console.WriteLine(a);
        }
    }
}