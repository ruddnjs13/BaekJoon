using System;
using System.Security.Cryptography;
using System.Threading.Channels;
namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i< t; i++)
            {
                float[] input = Array.ConvertAll(Console.ReadLine().Split(" "), float.Parse);
                float x1 = input[0], y1 = input[1], r1 = input[2], x2 = input[3], y2 = input[4], r2 = input[5];

                float d = MathF.Sqrt(MathF.Pow(x1 - x2,2) + MathF.Pow(y1 - y2,2));


                if (d == 0 && r1 == r2)
                {
                    Console.WriteLine(-1);
                }
                else if (d == r1 + r2 || MathF.Abs(r1 - r2) == d)
                {
                    Console.WriteLine(1);
                }
                else if (MathF.Abs(r1 - r2) < d && d < r1 + r2)
                {
                    Console.WriteLine(2);
                }
                else
                {
                    Console.WriteLine(0);
                }
            }
        }
    }
}