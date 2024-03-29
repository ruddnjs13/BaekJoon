using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder answer = new StringBuilder();
            int n = int.Parse(Console.ReadLine());
            (int x, int y)[] arr = new (int x, int y)[n];
            for (int i = 0; i < n; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '),int.Parse);
                arr[i] = (input[0],input[1]);
            }
            Array.Sort(arr);

            for (int i = 0; i < n; i++)
            {
                answer.AppendLine($"{arr[i].x} {arr[i].y}");
            }
            Console.WriteLine(answer);
        }
    }
}