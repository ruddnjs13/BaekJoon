using System;
using System.Collections.Generic;
using System.Collections.Immutable;

namespace baekjun
{
    class program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += int.Parse(s[i].ToString());
            }
            Console.WriteLine(sum);
        }

    }
}