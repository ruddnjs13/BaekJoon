using System;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            using var reader = new System.IO.StreamReader(Console.OpenStandardInput());
            using var printer = new System.IO.StreamWriter(Console.OpenStandardOutput());
            int n = int.Parse(reader.ReadLine());
            int[] arr = new int[10001];
            for (int i = 0; i < n; i++)
            {
                arr[int.Parse(reader.ReadLine())]++;
            }
            for (int i = 1; i < 10001; i++)
            {
               if (arr[i] != 0)
                {
                    for (int j = 0; j < arr[i]; j++)
                    {
                        printer.WriteLine(i);
                    }
                }
            }
        }
    }
}
