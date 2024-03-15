using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            double hak = 0, gwa = 0, haksum = 0, gwasum = 0;

            for (int i = 0; i <20; i++)
            {
                string[] input = Console.ReadLine().Split(' ');

                if (input[2] == "P")
                    continue;
                hak = double.Parse(input[1]);
                gwa = input[2] switch
                {
                    "A+" => 4.5,
                    "A0" => 4.0,
                    "B+" => 3.5,
                    "B0" => 3.0,
                    "C+" => 2.5,
                    "C0" => 2.0,
                    "D+" => 1.5,
                    "D0" => 1.0,
                    "F" => 0.0
                };
                haksum += hak;
                gwasum += (gwa * hak);

            }
            Console.WriteLine(gwasum / haksum);
        }
    }
}