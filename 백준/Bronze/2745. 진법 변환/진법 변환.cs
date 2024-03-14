using System;

namespace Baekjoon
{
    class Program
    {
        static int Jegob(int a, int b)
        {
            int result = 1;
            for (int i = 0; i < b; i++)
                result *= a;
            return result;
        }

        static void Main(string[] args)

        {
            string[] input = Console.ReadLine().Split(' ');
            string s = input[0];
            int formation = int.Parse(input[1]);
            int result = 0;

            for (int i = 0; i< s.Length; i++)
            {
                if ((int)s[i] < 58)
                {
                    result += (((int)s[i] - 48) * (Jegob(formation, (s.Length - i - 1))));
                }
                else if ((int)s[i] > 64)
                {
                    result += (((int)s[i] - 55) * (Jegob(formation, (s.Length - i - 1))));
                }
            }
            Console.WriteLine(result);
        }
    }
}