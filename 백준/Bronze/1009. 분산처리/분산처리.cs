using System;
using System.Security.Cryptography;
using System.Threading.Channels;
namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;

            int n = int.Parse(Console.ReadLine());

            int[] input;

            // 3 9 27 81 243
            // 9 81 729
            // 7 49 343 21 7
            // 2 4 8 16 32

            for (int i = 0; i < n; i++)
            {
                input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                int a = input[0];
                int b = input[1] % 4 + 4;
                sum = a;

                for (int j = 1; j < b; j++)
                {
                    sum *= a;
                    sum %= 10;
                    if (sum == 0)
                    {
                        sum = 10;
                    }
                }
                Console.WriteLine(sum);
            }
        }
    }


}