using System;
using System.Threading;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int sum = 0;
                int input = int.Parse(Console.ReadLine());
                string answer = "";
                if (input == -1)
                    break;

                for (int i = 1; i < input; i++)
                {
                    if (i == 1)
                    {
                        answer += ($"{input} = 1");
                        sum += i;
                        continue;
                    }
                    if (input % i == 0)
                    {
                        answer += (" + " + i);
                        sum += i;
                    }
                }
                if (sum == input)
                    Console.WriteLine(answer);
                else
                    Console.WriteLine("{0} is NOT perfect.", input);
            }
        }
    }
}