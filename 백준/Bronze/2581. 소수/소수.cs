using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            

            int m = int.Parse(Console.ReadLine());
            int n = int.Parse(Console.ReadLine());
            int sum = 0, min = n;
            for (int i = n; i >= m; i--)
            {
                for (int j = 2; j <=n; j++)
                {
                    if (j == i)
                    {
                        sum += i;
                        if (i < min)
                            min = i;
                        break;
                    }
                    else if (i % j == 0)
                    {
                        break;
                    }
                    
                }
            }
            if (sum == 0)
                Console.WriteLine(-1);
            else
            {
                Console.WriteLine(sum);
                Console.WriteLine(min);
            }
        }
    }
}