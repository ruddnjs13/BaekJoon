using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;
using System.Linq;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder answer = new StringBuilder();
            int n = int.Parse(Console.ReadLine());
            string[] arr = new string[n];
            for (int i = 0; i < n; i++){
                string input = Console.ReadLine();
                arr[i] = input;
            }

            arr = arr.Distinct().ToArray();

            arr = arr
             .Distinct()
             .OrderBy(x => x.Length)
             .ThenBy(x => x)
             .ToArray();

            foreach (string str  in arr)
            {
                answer.AppendLine(str);
            }
            Console.WriteLine(answer.ToString());
        }
    }
}