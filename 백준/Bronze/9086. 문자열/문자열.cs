using System;

namespace baekjun
{
    class program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] arr = new string[n];

            for (int i = 0; i < n; i++)
            {
                string s = Console.ReadLine();
                Console.WriteLine(s[0].ToString() + s[^1].ToString());
            }
            
        }

    }
}