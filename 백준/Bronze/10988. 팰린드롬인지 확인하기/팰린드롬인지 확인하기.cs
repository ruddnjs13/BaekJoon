using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int j = input.Length -1;
            int result = 0;
            for (int i = 0; i<=j; i++)
            {
                if (input[i] == input[j])
                    result = 1;
                else if (input[i] != input[j])
                {
                    result = 0;
                    break;
                }
                j--;
            }
            Console.WriteLine(result);
        }
    }
}