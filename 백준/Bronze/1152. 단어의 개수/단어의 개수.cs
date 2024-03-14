using System;

namespace Test123
{
    class Program
    {
        static void Main(string[] args)

        {
            int count = 0;
            string input = Console.ReadLine().Trim();
            for (int i = 0; i < input.Length; i++)
            {
                if (input[i] == ' ')
                    count++;
            }
            if (input.Length == 0)
                count--;
            Console.WriteLine(count + 1);
        }
    }
}