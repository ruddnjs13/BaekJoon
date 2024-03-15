using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            char[,] pan = new char[5, 15];
            for (int i = 0; i < 5; i++)
            {
                string input = Console.ReadLine();
                for (int j = 0; j < input.Length; j++)
                {
                    pan[i, j] = input[j];
                }
            }
            for (int i = 0;i < 15; i++)
            {
                for (int j = 0;j < 5; j++)
                {
                    if (pan[j,i] =='\0')
                    {
                        continue;
                    }
                    Console.Write(pan[j,i]);
                }
                
            }
        }
    }
}
