using System;
using System.Threading;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int i = 1;
            int position = 1;
            int checknum = 8;
            while (i <= n)
            {
                if (i == 2)
                {
                    position++;
                }
                if (i == checknum)
                {
                    position++;
                    checknum += 6 * (position - 1);
                }
                i++;
            }
            Console.WriteLine(position);
        }
    }
}