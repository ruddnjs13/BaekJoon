using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 1, j = 1;
            int n  = int.Parse(Console.ReadLine());
            int sum = 1;
            int check = 0;
            int addsum = 2;

            for (int num = 1; num < n; num++)
            {
                if (num == sum && check == 0)
                {
                    j++;
                    check = 1;
                    sum += addsum++;
                    continue;
                    
                }
                else if (num == sum && check ==1)
                {
                    i++;
                    check = 0;
                    sum += addsum++;
                    continue;
                }
                if (check ==1)
                {
                    i++;
                    j--;
                    continue;
                }
                else if (check == 0)
                {
                    i--;
                    j++;
                    continue;
                }

            }
            Console.WriteLine($"{i}/{j}");
        }
    }
}